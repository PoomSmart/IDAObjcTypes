#ifndef QUARTZCORE_H_
#define QUARTZCORE_H_

typedef struct CAFrameRateRange {
    float minimum;
    float maximum;
    float preferred;
} CAFrameRateRange;

extern const CAFrameRateRange CAFrameRateRangeDefault;

#endif
