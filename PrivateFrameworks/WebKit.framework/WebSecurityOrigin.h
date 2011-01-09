/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebSecurityOriginPrivate;



@interface WebSecurityOrigin : NSObject 
{
    WebSecurityOriginPrivate *_private;
}


- (id)initWithURL:(id)arg1;
- (id)protocol;
- (unsigned short)port;
- (void)setQuota:(unsigned long long)arg1;
- (id)host;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (struct SecurityOrigin { NSInteger x1; NSInteger x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; unsigned short x7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void*x9; void*x10; void*x11; }*)_core;
     /* Encoded args for previous method: ^{SecurityOrigin=ii{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}SBBBB}8@0:4 */

- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { NSInteger x1; NSInteger x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; unsigned short x7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void*x9; void*x10; void*x11; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{SecurityOrigin=ii{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}SBBBB}8 */

- (id)toString;
- (id)domain;
- (id)safari_userVisibleName;
- (id)webui_userVisibleName;

@end