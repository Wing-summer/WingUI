#pragma once

#ifndef CDPI_H
#define CDPI_H

namespace WingUI
{
	enum class PROCESS_DPI_AWARENESS {
		PROCESS_DPI_UNAWARE = 0,
		PROCESS_SYSTEM_DPI_AWARE = 1,
		PROCESS_PER_MONITOR_DPI_AWARE = 2
	};

	enum class MONITOR_DPI_TYPE {
		MDT_EFFECTIVE_DPI = 0,
		MDT_ANGULAR_DPI = 1,
		MDT_RAW_DPI = 2,
		MDT_DEFAULT = MDT_EFFECTIVE_DPI
	};

	class CDPI
	{
	public:
		CDPI();

	public:
	public:
		static int GetMainMonitorDPI();
		static int GetDPIOfMonitor(HMONITOR hMonitor);
		static int GetDPIOfMonitorNearestToPoint(POINT pt);

	public:
		PROCESS_DPI_AWARENESS GetDPIAwareness();
		BOOL SetDPIAwareness(PROCESS_DPI_AWARENESS Awareness);
		UINT GetDPI();
		UINT GetScale();
		void SetScale(UINT uDPI);
		RECT Scale(RECT rcRect);
		void Scale(RECT* pRect);
		POINT Scale(POINT ptPoint);
		void Scale(POINT* pPoint);
		SIZE Scale(SIZE szSize);
		void Scale(SIZE* pSize);
		int Scale(int iValue);

		int  ScaleBack(int iValue);
		void ScaleBack(RECT* pRect);

	private:
		int m_nScaleFactor;
		int m_nScaleFactorSDA;
		PROCESS_DPI_AWARENESS m_Awareness;

	};
}

#endif // !CDPI_H