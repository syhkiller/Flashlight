//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPResult.h"

@class NSImage, NSURL;

@interface SPImageResult : SPResult
{
    NSImage *_image;
    NSURL *_imageURL;
}

@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 imageURL:(id)arg2;

@end
