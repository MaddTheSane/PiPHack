//
//  PIPViewControllerDelegate.h
//  PiPHack
//
//  Created by Stephen Radford on 09/09/2016.
//  Copyright © 2016 Cocoon Development Ltd. All rights reserved.
//

#ifndef PIPViewControllerDelegate_h
#define PIPViewControllerDelegate_h

#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

@class PIPViewController;

@protocol PIPViewControllerDelegate <NSObject>
@optional
- (BOOL)pipShouldClose:(PIPViewController *)pip NS_AVAILABLE_MAC(10_12);
- (void)pipDidClose:(PIPViewController *)pip NS_AVAILABLE_MAC(10_12);
- (void)pipActionPlay:(PIPViewController *)pip NS_AVAILABLE_MAC(10_12);
- (void)pipActionPause:(PIPViewController *)pip NS_AVAILABLE_MAC(10_12);
- (void)pipActionStop:(PIPViewController *)pip NS_AVAILABLE_MAC(10_12);
@end

NS_ASSUME_NONNULL_END

#endif /* PIPViewControllerDelegate_h */
