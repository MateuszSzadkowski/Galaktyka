#ifndef GALACTICMARKET_H
#define GALACTICMARKET_H

#include "Resource.h"
#include <vector>

class GalacticMarket {
private:
    struct Listing
    {
        Resource Resource;
        int Quantity{};
        mutable float PricePerUnit{};
    };
    std::vector<Listing> Listings;

public:

    friend class Civilization;

    void AddListing(const Listing& newListing);

    static void PrintListing(Listing Listing);

    void PrintPageOfListings(int Page) const;

};

#endif //GALACTICMARKET_H
