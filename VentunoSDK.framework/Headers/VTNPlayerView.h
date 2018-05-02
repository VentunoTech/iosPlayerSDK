//
//  VTNPlayerView.h
//  VentunoSDK
//
//  Created by ventuno on 08/06/16.
//  Copyright © 2016 Ventuno. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VTNEvent.h"
#import "VTNPlayerState.h"
#import "VTNPlaybackType.h"

@class VTNPlayerView;
@protocol VTNPlayerViewDelegate <NSObject>
@optional

/*! Called when an error occured in the player */
- (void)vtnPlayerView:(VTNPlayerView *)playerView encounteredError:(NSError *)error;

/*! Called when the player is about to enter fullscreen */
- (void)vtnPlayerViewWillEnterFullscreen:(VTNPlayerView *)playerView;

/*! Called when the player did enter fullscreen */
- (void)vtnPlayerViewDidEnterFullscreen:(VTNPlayerView *)playerView;

/*! Called when the player's UI is shown */
- (void)vtnPlayerViewDidShowUI:(VTNPlayerView *)playerView;

/*! Called when the player's UI hides */
- (void)vtnPlayerViewDidHideUI:(VTNPlayerView *)playerView;

/*! Called when the player is about to exit fullscreen */
- (void)vtnPlayerViewWillExitFullscreen:(VTNPlayerView *)playerView;

/*! Called when the player has exited fullscreen */
- (void)vtnPlayerViewDidExitFullscreen:(VTNPlayerView *)playerView;

/*! Return YES if the player can start playing media */
- (BOOL)vtnPlayerViewCanPlay:(VTNPlayerView *)playerView;

/*! Called for specific events */
- (void)vtnPlayerView:(VTNPlayerView *)playerView eventOccured:(VTNEvent *)event;

/*! Called when the player state changes */
- (void)vtnPlayerViewPlayerStateChanged:(VTNPlayerState)playerState;

@end


@class VTNPlayer;
/*! The view that needs to be used to play Ventuno content/videos. */
@interface VTNPlayerView : UIView {
    
}

/*! The UIViewController of the view in which this view is a subview. Needs to be set for the fullscreen mode to work */
@property (nonatomic, weak) IBOutlet UIViewController        *viewController;

@property (nonatomic, weak) IBOutlet id<VTNPlayerViewDelegate>      delegate;

@property (nonatomic) BOOL      autoPlay;

/*! Current state of the player */
@property (nonatomic, readonly) VTNPlayerState      state;

/*! Playback type of current video */
@property (nonatomic, readonly) VTNPlaybackType     playbackType;


/*! Sets the player's theme color (ignores the server settings if set) */
@property (nonatomic) UIColor   *themeColor;

/*! Toggles the fullscreen button */
@property (nonatomic) BOOL      showFullscreenButton;

/*! Indicates if the player is casting to a device (Chromecast, Airplay) */
@property (nonatomic, readonly) BOOL        isCasting;

/* Default is YES */
@property (nonatomic) BOOL      uiEnabled;

/*! sets the app identifier key */
+ (void)setAppKey:(NSString *)key;
/*! returns the previously set identifier key for the application */
+ (NSString *)appKey;

- (void)loadContent:(NSURL *)url;

- (void)loadMediaForKey:(NSString *)key;
- (void)loadMediaForTitle:(NSString *)title category:(NSString *)category keywords:(NSArray *)keywords customData:(NSDictionary *)customData;
- (void)loadMediaForEditorial:(NSString *)urlString;
- (void)loadMediaForJSON:(NSDictionary *)json;


- (void)resetFrames;

- (void)play;
- (void)pause;
- (void)stop;
- (void)replay;

- (void)enterFullscreen;
- (void)exitFullscreen;


@end
