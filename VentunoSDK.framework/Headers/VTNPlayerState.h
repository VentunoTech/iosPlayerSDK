//
//  VTNPlayerState.h
//  VentunoSDK
//
//  Created by ventuno on 08/06/16.
//  Copyright © 2016 Ventuno. All rights reserved.
//

#ifndef VTNPlayerState_h
#define VTNPlayerState_h

typedef enum {
    VTNPlayerStateNotLoaded,
    VTNPlayerStateLoading,
    VTNPlayerStateSeeking,
    VTNPlayerStateReady,
    VTNPlayerStatePlaying,
    VTNPlayerStatePaused,
    VTNPlayerStateStopped,
    VTNPlayerStateFinished,
//    VTNPlayerStateError,
} VTNPlayerState;

#endif /* VTNPlayerState_h */
