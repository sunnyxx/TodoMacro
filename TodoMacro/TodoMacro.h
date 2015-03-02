//
//  TODOMacro.h
//  TodoMacro
//
//  Created by sunnyxx on 15/3/1.
//  Copyright (c) 2015年 sunnyxx. All rights reserved.
//

// 转成字符串
#define STRINGIFY(S) #S
// 需要解两次才解开的宏
#define DEFER_STRINGIFY(S) STRINGIFY(S)

#define PRAGMA_MESSAGE(MSG) _Pragma(STRINGIFY(message(MSG)))

// 为warning增加更多信息
#define FORMATTED_MESSAGE(MSG) "[TODO-" DEFER_STRINGIFY(__COUNTER__) "] " MSG " \n" DEFER_STRINGIFY(__FILE__) " line " DEFER_STRINGIFY(__LINE__)

// 使宏前面可以加@
#define KEYWORDIFY try {} @catch (...) {}

// 最终使用的宏
#define TODO(MSG) KEYWORDIFY PRAGMA_MESSAGE(FORMATTED_MESSAGE(MSG))
