/**
 * \file LinearSolver.h
 *
 * Created on 2011-01-07 by Thomas Fischer
 */

#ifndef LINEARSOLVER_H_
#define LINEARSOLVER_H_

namespace MathLib {

/**
 * Base class for all linear solver classes.
 */
class LinearSolver {
public:
	LinearSolver() {};
	virtual ~LinearSolver() {};
};

}

#endif /* LINEARSOLVER_H_ */
