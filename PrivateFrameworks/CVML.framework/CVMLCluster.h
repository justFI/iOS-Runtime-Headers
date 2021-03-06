/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLCluster : NSObject {
    unsigned int  _clusterId;
    NSArray * _objects;
    NSDictionary * _representativenessById;
    BOOL  _shouldUpdateRepresentative;
    NSArray * _suggestedIdsForRepresentative;
    unsigned int  _totalObjectCount;
}

@property unsigned int clusterId;
@property (retain) NSArray *objects;
@property (retain) NSDictionary *representativenessById;
@property BOOL shouldUpdateRepresentative;
@property (retain) NSArray *suggestedIdsForRepresentative;
@property unsigned int totalObjectCount;

- (void).cxx_destruct;
- (unsigned int)clusterId;
- (id)description;
- (id)objects;
- (id)representativenessById;
- (void)setClusterId:(unsigned int)arg1;
- (void)setObjects:(id)arg1;
- (void)setRepresentativenessById:(id)arg1;
- (void)setShouldUpdateRepresentative:(BOOL)arg1;
- (void)setSuggestedIdsForRepresentative:(id)arg1;
- (void)setTotalObjectCount:(unsigned int)arg1;
- (BOOL)shouldUpdateRepresentative;
- (id)suggestedIdsForRepresentative;
- (unsigned int)totalObjectCount;

@end
