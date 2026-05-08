#include "GalacticMarket.h"
#include <iostream>

void GalacticMarket::AddListing(const Listing& newListing)
{
    Listings.push_back(newListing);
}

void GalacticMarket::PrintListing(Listing Listing)
{
    std::cout << "Resource: " << Listing.Resource.getType() << " Quantity: " << Listing.Quantity << " Price for one: " << Listing.PricePerUnit << std::endl;
}

void GalacticMarket::PrintPageOfListings(const int Page) const {
    if (Listings.empty())
        std::cout << "No Listings available on the market." << std::endl;
    else if (Listings.size() <= 10 * Page)
        std::cout << "This page is not available" << std::endl;
    else if (Listings.size() >= 10 * Page + 10)
    {
        for (int i = 10 * Page; i < 10 * Page + 10; i++)
        {
            PrintListing(Listings[i]);
        }
        std::cout << std::endl;
    }
    else if (Listings.size() > 10 * Page && Listings.size() < 10 * Page + 10)
    {
        for (int i = 10 * Page; i < Listings.size(); i++)
        {
            PrintListing(Listings[i]);
        }
        std::cout << std::endl;
    }
}
