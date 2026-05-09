#include "GalacticMarket.h"
#include <iostream>

void GalacticMarket::AddListing(const Listing& newListing)
{
    listings.push_back(newListing);
}

void GalacticMarket::PrintListing(Listing listing)
{
    std::cout << "Resource: " << listing.resource.getType() << " Quantity: " << listing.quantity << " Price for one: " << listing.pricePerUnit << std::endl;
}

void GalacticMarket::PrintPageOfListings(const int page) const
{
    if (listings.empty())
        std::cout << "No Listings available on the market." << std::endl;
    else if (listings.size() <= 10 * page)
        std::cout << "This page is not available" << std::endl;
    else if (listings.size() >= 10 * page + 10)
    {
        for (int i = 10 * page; i < 10 * page + 10; i++)
        {
            PrintListing(listings[i]);
        }
        std::cout << std::endl;
    }
    else if (listings.size() > 10 * page && listings.size() < 10 * page + 10)
    {
        for (int i = 10 * page; i < listings.size(); i++)
        {
            PrintListing(listings[i]);
        }
        std::cout << std::endl;
    }
}
