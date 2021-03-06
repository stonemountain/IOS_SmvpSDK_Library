//
//  SmvpVideoPlayerViewController.h
//  SmvpClient
//
//  Created by julien on 13-12-30.
//  Copyright (c) 2013年 smvp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmvpVideoPlayer.h"
#import "SmvpVideoPlayerView.h"
#import "SmvpVideoPlayerConfigurations.h"
#import "SmvpVideoPlayInfor.h"

@interface SmvpVideoPlayerViewController : UIViewController <SmvpVideoPlayer>

@property (nonatomic, weak) id <SmvpVideoPlayerDelegate> delegate;
@property (readonly, strong) NSMutableDictionary *currentVideoInfo;
@property (readonly, strong) SmvpVideoPlayerView *videoPlayerView;
@property (readonly) BOOL fullScreenModeToggled;
@property (nonatomic) BOOL showStaticEndTime;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic) BOOL allowPortraitFullscreen;
@property (nonatomic) UIEdgeInsets controlsEdgeInsets;
@property (readwrite, strong) SmvpVideoPlayInfor *pl;
@property (readwrite, strong) AVPlayer *videoPlayer;

- (void)playVideoWithTitle:(NSString *)title URL:(NSURL *)url videoID:(NSString *)videoID playerConfigurations:(SmvpVideoPlayerConfigurations *)configurations isStreaming:(BOOL)streaming playInFullScreen:(BOOL)playInFullScreen;
- (void)syncFullScreenButton:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)showCannotFetchStreamError;
- (void)launchFullScreen;
- (void)minimizeVideo;
- (void)playPauseHandler;
- (void)seekToTime:(CMTime)time;
+ (SmvpVideoPlayerViewController *)videoPlayerWithContainingViewController:(UIViewController *)containingViewController topView:(UIView *)topView;


@end
