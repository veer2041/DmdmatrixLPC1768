#ifndef _TYPE_H_
#define _TYPE_H_

typedef unsigned char		U8;	
typedef unsigned short int	U16;	
typedef unsigned int		U32;	

typedef signed char		S8;	
typedef signed short int	S16;
typedef signed int		S32;

typedef float                   f32;
#define	TRUE	1			
#define FALSE	0			

#ifndef NULL
#define NULL	((void*)0)		
#endif
#define MIN_OF(x,y)	((x)<(y)?(x):(y))
#define MAX_OF(x,y)	((x)>(y)?(x):(y))

#endif /* _TYPE_H_ */

