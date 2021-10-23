/* Determine Hamming Distance
*  Function determines the number of different nucleotides when two
*  DNA strands are compared. An exception is thrown if the DNA strands
*  are of lengths.
*/

#include "hamming.h"

namespace hamming {

	int compute(const std::string& strandA, const std::string& strandB)
	{
		int hamming = 0;
		
		if(strandA.size() != strandB.size())
			throw std::domain_error("Strand sizes have different lengths.");

		for (auto itA = strandA.begin(), itB = strandB.begin(); itA != strandA.end(); itA++, itB++)
		{
			hamming += (*itA != *itB);
		}
		
		return hamming;
	}

}  // namespace hamming
