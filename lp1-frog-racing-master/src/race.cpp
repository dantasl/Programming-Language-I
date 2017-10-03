/**
 * @file	race.cpp
 * @brief	Simulation of the frog racing.
 * 		    Instantiate the objects from class frog, calling method jump inside a loop
 *        that only will break when one of the frogs reaches the total race distance.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	19/08/2017
 * @date	19/08/2017
 */

#include "frog.h"
#include "race.h"
int Frog::race_distance = 90; /*!< Defining static attribute race_distance with 90. */
void race(int dist, int max_distance_jump)
{
  Frog f1(1, max_distance_jump); /*!< Instantiate f1 from class Frog, calling constructor. */
  Frog f2(2, max_distance_jump); /*!< Instantiate f2 from class Frog, calling constructor. */
  Frog f3(3, max_distance_jump); /*!< Instantiate f3 from class Frog, calling constructor. */

  if(dist != 90){
    f1.race_distance = dist;
    f2.race_distance = dist;
    f3.race_distance = dist;
  }

  /**
   * @brief While one of the frogs does not reach the total race distance, continues to call method jump.
   */
  while(f1.getTravelled_Distance() < Frog::race_distance and
        f2.getTravelled_Distance() < Frog::race_distance and
        f3.getTravelled_Distance() < Frog::race_distance)
  {
    f1.jump();
    f2.jump();
    f3.jump();
  }

  /**
   * @brief Verifies wich frog won the race.
   * If there is a tie, the frog with the identifier closest to 0 is the winner.
   * Since the problem proposed by the teacher did not asked to solve the tie problem,
   * I've decided to treat it this way.
   */
  if(f1.getTravelled_Distance() == Frog::race_distance)
  {
    std::cout << std::endl << "Frog #1 won!" << std::endl << std::endl;
  }
  else if(f2.getTravelled_Distance() == Frog::race_distance)
  {
    std::cout << std::endl << "Frog #2 won!" << std::endl << std::endl;
  }
  else
  {
    std::cout << std::endl << "Frog #3 won!" << std::endl << std::endl;
  }

  std::cout << "If there was a tie, the frog with the identifer closest to 0 won!" << std::endl << std::endl;

  std::cout << "Frog #1 ran: " << f1.getTravelled_Distance() << " with ";
  std::cout << f1.getJumps() << " jumps." << std::endl;

  std::cout << "Frog #2 ran: " << f2.getTravelled_Distance() << " with ";
  std::cout << f2.getJumps() << " jumps." << std::endl;

  std::cout << "Frog #3 ran: " << f3.getTravelled_Distance() << " with ";
  std::cout << f3.getJumps() << " jumps." << std::endl;
}
