C $Header: /u/gcmpack/MITgcm/verification/1D_ocean_ice_column/code/DIAGNOSTICS_SIZE.h,v 1.1 2011/03/28 15:50:50 ifenty Exp $
C $Name: checkpoint66m $


C     Diagnostics Array Dimension
C     ---------------------------
C     ndiagMax   :: maximum total number of available diagnostics
C     numlists   :: maximum number of diagnostics list (in data.diagnostics)
C     numperlist :: maximum number of active diagnostics per list (data.diagnostics)
C     numLevels  :: maximum number of levels to write    (data.diagnostics)
C     numdiags   :: maximum size of the storage array for active 2D/3D diagnostics
C     nRegions   :: maximum number of regions (statistics-diagnostics)
C     nStats     :: maximum number of statistics (e.g.: aver,min,max ...)
C     diagSt_size:: maximum size of the storage array for statistics-diagnostics
C Note : may need to increase "numdiags" when using several 2D/3D diagnostics,
C  and "diagSt_size" (statistics-diags) since values here are deliberately small.
      INTEGER    ndiagMax
      INTEGER    numlists, numperlist, numLevels
      INTEGER    numdiags
      INTEGER    nRegions, nStats
      INTEGER    diagSt_size
      PARAMETER( ndiagMax = 500 )
      PARAMETER( numlists = 100, numperlist = 50, numLevels=2*Nr )
      PARAMETER( numdiags = 40*Nr )
      PARAMETER( nRegions = 0 , nStats = 4 )
      PARAMETER( diagSt_size = 10*Nr )


CEH3 ;;; Local Variables: ***
CEH3 ;;; mode:fortran ***
CEH3 ;;; End: ***
