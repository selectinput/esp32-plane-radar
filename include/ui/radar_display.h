#pragma once

namespace ui {

/** Draw the static sonar/radar grid (black disc, green overlay, labels). */
void radarDisplayDraw();

/** Redraw aircraft only (blits cached grid; no full-screen clear). Call when
 *  new ADS-B data arrives — also resets the dead-reckoning epoch. */
void radarDisplayRefreshAircraft();

/** Per-frame redraw at dead-reckoned positions between fetches (smooth motion).
 *  Call at the desired frame rate (config::kRadarRenderFps). */
void radarDisplayTick();

/** Redraw only the range label (no full-screen clear). Use after rangeNext(). */
void radarDisplayRefreshRange();

}  // namespace ui
