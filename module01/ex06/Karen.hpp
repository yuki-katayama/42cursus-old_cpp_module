#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define NUM_LEVEL 5

class Karen {
	public:
		enum each_level {
			LEVEL_ERROR = 0,
			LEVEL_WARNING,
			LEVEL_INFO,
			LEVEL_DEBUG,
			LEVEL_INSIGNIFIC = -1
		};
		Karen( void );
		Karen( const std::string &level );
		~Karen( void );
		void complain( const each_level &level );
		each_level &getLevel(void);
	private:
		each_level	_level;

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void insignific( void );
		each_level getLevelFromString( const std::string &level ) const;
};

typedef struct	s_complain {
	std::string mode;
	void ( Karen::*ft_complain ) ( void );
}				t_complain;

#endif
