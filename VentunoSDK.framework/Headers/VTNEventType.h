//
//  VTNPlayerViewEvent.h
//  VentunoSDK
//
//  Created by ventuno on 27/07/16.
//  Copyright © 2016 Ventuno. All rights reserved.
//

#ifndef VTNPlayerEvent_h
#define VTNPlayerEvent_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VTNEventType) {
    
    VTNEventUnknown = 0,
    
    VTNEventPlayerReady = 1,
    
    VTNEventAdPause,        //player paused
    VTNEventContentPause,   //player paused
    
    VTNEventAdPlay,         //player played
    VTNEventContentPlay,    //player played
    
    VTNEventReplay,         //Player will replay
    
    VTNEventLoadMedia,      //a new media is to be loaded (internal) (not implemented)
    
    VTNEventAdBeganPlaying, //an Ad began playing
    VTNEventContentBeganPlaying,    //the content began playing
    
    VTNEventAdFirstQuartileCompleted,       //surpassed first quartile for ad
    VTNEventContentFirstQuartileCompleted,  //surpassed first quartile for content
    
    VTNEventAdMidPointCompleted,            //surpassed mid-point for ad
    VTNEventContentMidPointCompleted,       //surpassed mid-point for content
    
    VTNEventAdThirdQuartileCompleted,       //surpassed third quartile for an ad
    VTNEventContentThirdQuartileCompleted,  //surpassed third quartile for content
    
    VTNEventAdCompleted,    //an Ad complete
    VTNEventContentCompleted,       //the content completed playing
    
    VTNEventAdSkipped,      //ad was skipped
    
    VTNEventAdInteracted,   //user interacted with the ad
    
    VTNEventPlaybackCompleted   //completed playing all the ads and content
};

#endif /* VTNPlayerViewEvent_h */
