The core raytracer is the pbrt framework written by Pharr at Google and covers much of the code in src/

The original RPF code is written by Bako at UCSB and covers much of the code 
in src/{SampleWriter,RPF}

Some adaptive classes such as the src/bandwidth and core/denoiser were written
by Rouselle of at Disney Research.

after git clone,
cd cse528/src
scons
cd ../scenes
./pbrt Conference.pbrt
