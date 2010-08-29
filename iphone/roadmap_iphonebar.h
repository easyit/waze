/* roadmap_iphonebar.h - iPhone top and bottom bar
 *
 * LICENSE:
 *
 *   Copyright 2009 Avi R.
 *
 *   This file is part of RoadMap.
 *
 *   RoadMap is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   RoadMap is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with RoadMap; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef ROADMAP_IPHONEBAR_H_
#define ROADMAP_IPHONEBAR_H_

@interface RoadMapTopBarView : UIView {
}
- (void) buttonEvent: (id) sender;
- (void) showView;
- (void) hideView;

@end

@interface RoadMapBottomBarView : UIToolbar {
}
- (void) buttonEvent: (id) sender;

@end

@interface RoadMapMoreBarView : UIToolbar {
   BOOL  isShown;
}
- (void) buttonEvent: (id) sender;
- (void) showView;
- (void) hideView;
- (int) moreBarIsShown;

@end

UIView *roadmap_bar_create_top_bar ();
UIToolbar *roadmap_bar_create_bottom_bar (int height, int pos_y);
UIToolbar *roadmap_bar_create_more_bar (void);

#endif //ROADMAP_IPHONEBAR_H_