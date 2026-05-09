#ifndef GALACTICMARKET_H
#define GALACTICMARKET_H

#include "Resource.h"
#include <vector>

class GalacticMarket
{
private:
    struct Listing
    {
        Resource resource;
        int quantity{};
        mutable float pricePerUnit{};
    };
    std::vector<Listing> listings;

public:

    friend class Civilization;

    void AddListing(const Listing& newListing);

    static void PrintListing(Listing listing);

    void PrintPageOfListings(int page) const;

};

#endif //GALACTICMARKET_H
