# MeDuSA: mixed model-based deconvolution of cell-state abundances along a one-dimensional trajectory

## Overview
![Image text](https://github.com/LeonSong1995/MeDuSA/blob/master/docs/Overview2.jpg)

**MeDuSA** is a fine-resolution cellular deconvolution method that leverages scRNA-seq data as a reference to estimate `cell-state abundance along a one-dimensional trajectory` in bulk RNA-seq data. **MeDuSA** features the use of a linear mixed model (LMM) to fit a cell state in question (either a single cell or the mean of multiple cells) as a fixed effect and the remaining cells of the same cell type individually as random effects accounting for correlations between cells. This model improves the deconvolution accuracy because the random-effect component allows each cell has a specific weight on bulk gene expression, resulting in a better capturing of variance in bulk gene expression. This model also ameliorates the collinearity problem between cells at the focal state (fitted as a fixed effect) and those at adjacent states (fitted as random effects) because of the shrinkage of random effects.


## New version
MeDuSA now also supports cell-state deconvolution for annotated discrete `cell states (cell types)`. Please check the [MeDuSAJ](https://jianyang-lab.github.io/MeDuSA/). 
MeDuSAJ is more robust for estimating cell state (cell type) abundance for rare cells, albeit with a slightly increased computational burden. Tutorials can be found in the [README](https://github.com/LeonSong1995/MeDuSAJ) of MeDuSAJ.



## Installation
```R
# Please install the Seurat. (https://satijalab.org/seurat/)
install.packages("Seurat")

# Please install the BiocParallel.
if (!require("BiocManager", quietly = TRUE))
    install.packages("BiocManager")
BiocManager::install("BiocParallel")

# Install the MeDuSA (R version > 3.5.0)
if (!requireNamespace("devtools", quietly = TRUE))
    install.packages("devtools")
devtools::install_github("LeonSong1995/MeDuSA", build_vignettes=F)
```


## How to Use
See [tutorial.](https://jianyang-lab.github.io/MeDuSA/)


## Contact
If you have any questions for MeDuSA, please feel free to leave messages on the github issues or contact me <songliyang@westlake.edu.cn>.   


## Citation
Song, L., Sun, X., Qi, T. et al. Mixed model-based deconvolution of cell-state abundances (MeDuSA) along a one-dimensional trajectory. Nat Comput Sci (2023). https://doi.org/10.1038/s43588-023-00487-2



