#include <stdio.h>

const double s_m = 59.0/10;//秒_分相对速度
const double m_h = 11.0/120;//分_时相对速度
const double s_h = 719.0/120;//秒_时相对速度

const double s_m_T = 3600.0/59;//秒_分相对周期
const double m_h_T = 43200.0/11;//分_时相对周期
const double s_h_T = 43200.0/719;//秒_时相对周期


double max( double a, double b, double c )
{
    double max = a;
    if( b > max )
        max = b;
    if( c > max )
        max = c;
    return max;
}

double min( double a, double b, double c )
{
    double min = a;
    if( b < min )
        min = b;
    if( c < min ) 
        min = c;
    return min;
}


int main()
{
	double d;
	double start, end, happyTime;
	double x[3],y[3];
	double m[3],n[3];
	while(scanf("%lf", &d))
	{
		if(d == -1)
			break;

		//第一次满足条件的时间
		x[0] = d / s_m;
		x[1] = d / m_h;
		x[2] = d / s_h;

		//第一次不满足条件的时间
		y[0] = (360 - d) / s_m;
		y[1] = (360 - d) / m_h;
		y[2] = (360 - d) / s_h;

		happyTime = 0.0;

		for (m[0]=x[0], n[0]=y[0]; n[0] < 43200.000001; m[0] += s_m_T, n[0] += s_m_T)
		{

			for (m[1]=x[1], n[1]=y[1]; n[1] < 43200.000001; m[1] += m_h_T, n[1] += m_h_T)
			{
				if(n[0] < m[1])
					break;
				if(m[0] > n[1])
					continue;
				for (m[2]=x[2], n[2]=y[2]; n[2] < 43200.000001; m[2] += s_h_T, n[2] += s_h_T)
				{
					if(m[2]>n[0] || m[2]>n[1])
						break;
					if(n[2]<m[0] || n[2]<m[1])
						continue;

					start = max(m[0], m[1], m[2]);
					end = min(n[0], n[1], n[2]);
					happyTime += (end - start);
				}
			}
		}

		printf("%.3lf\n", happyTime * 100 / 43200);

	}
	return 0;
}