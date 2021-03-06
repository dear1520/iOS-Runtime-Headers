/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRetainedSearchMetadata : PBCodable <NSCopying> {
    NSString * _query;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQuery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
