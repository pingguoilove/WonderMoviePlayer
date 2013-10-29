//
//  WonderMoviePlayerConstants.h
//  WonderMoviePlayer
//
//  Created by Zhuang Yanjun on 13-8-26.
//  Copyright (c) 2013年 Tencent. All rights reserved.
//

#ifndef WonderMoviePlayer_WonderMoviePlayerConstants_h
#define WonderMoviePlayer_WonderMoviePlayerConstants_h

#ifndef QQImage
#include "UIImageEx.h"
#define QQImage(src) [UIImageEx loadAndCacheImageFromApp:src]
#endif

#ifndef QQVideoPlayerImage
#define QQVideoPlayerImage(src) [UIImageEx loadAndCacheImageFromApp:[NSString stringWithFormat:@"function_videoplayer_%@", src]]
#endif

#define kProgressViewPadding 16

#endif
