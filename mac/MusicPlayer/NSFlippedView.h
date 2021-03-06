// NSFlippedView.h
// part of MusicPlayer, https://github.com/albertz/music-player
// Copyright (c) 2013, Albert Zeyer, www.az2000.de
// All rights reserved.
// This code is under the 2-clause BSD license, see License.txt in the root directory of this project.

#import <Cocoa/Cocoa.h>

@interface _NSFlippedView : NSView
{
@private
	BOOL _drawsBackground;
	NSColor* _backgroundColor;
	BOOL _drawsFocusRing;
}

- (void)setDrawsBackground:(BOOL)value;
- (void)setBackgroundColor:(NSColor*)value;
- (NSColor*)backgroundColor;
- (void)setDrawsFocusRing:(BOOL)value;

@end
