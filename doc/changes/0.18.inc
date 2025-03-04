.. _changes_0_18:

Version 0.18
------------

Changelog
~~~~~~~~~

- Add ``event_id='auto'`` in :func:`mne.events_from_annotations` to accommodate Brainvision markers by `Jona Sassenhagen`_, `Joan Massich`_ and `Eric Larson`_

- Add example on how to simulate raw data using subject anatomy, by `Ivana Kojcic`_,`Eric Larson`_,`Samuel Deslauriers-Gauthier`_ and`Kostiantyn Maksymenko`_

- :func:`mne.beamformer.apply_lcmv_cov` returns static source power after supplying a data covariance matrix to the beamformer filter by `Britta Westner`_ and `Marijn van Vliet`_

- Add ``butterfly`` and ``order`` arguments to :func:`mne.viz.plot_epochs` and offer separated traces for non-meg data (seeg, eeg, ecog) in butterfly view by `Stefan Repplinger`_ and `Eric Larson`_

- :meth:`mne.Epochs.get_data` now takes a ``picks`` parameter by `Jona Sassenhagen`_

- :func:`~mne.viz.plot_compare_evokeds` will generate topo plots if ``axes='topo'`` by `Jona Sassenhagen`_

- ``mne.viz.iter_topography`` can yield an additional axis, e.g., for plotting legends by `Jona Sassenhagen`_ and `Daniel McCloy`_

- Default plot title reflects channel type when ``picks`` is a channel type in :func:`~mne.viz.plot_compare_evokeds` by `Daniel McCloy`_

- Color scale limits in :func:`~mne.viz.plot_topo_image_epochs` are now computed separately per channel type in combined mag/grad plots, by `Daniel McCloy`_

- :func:`mne.simulation.simulate_stc` now allows for label overlaps by `Nathalie Gayraud`_, and `Ivana Kojcic`_

- Add ``long_format`` option to the pandas dataframe exporters, e.g :meth:`mne.Epochs.to_data_frame` by `Denis Engemann`_

- Add example on how to load standard montage :ref:`plot_montage` by `Joan Massich`_

- Add new tutorial on :ref:`tut-eeg-fsaverage-source-modeling` by `Alex Gramfort`_, and `Joan Massich`_

- Add :meth:`mne.Epochs.apply_hilbert` and :meth:`mne.Evoked.apply_hilbert` by `Eric Larson`_

- Add convenience ``fsaverage`` subject dataset fetcher / updater :func:`mne.datasets.fetch_fsaverage` by `Eric Larson`_

- Add ``fmin`` and ``fmax`` argument to :meth:`mne.time_frequency.AverageTFR.crop` and to :meth:`mne.time_frequency.EpochsTFR.crop` to crop TFR objects along frequency axis by `Dirk Gütlin`_

- Add support to :func:`mne.read_annotations` to read CNT formats by `Joan Massich`_

- Add ``reject`` parameter to :meth:`mne.preprocessing.ICA.plot_properties` to visualize rejected epochs by `Antoine Gauthier`_

- Add support for picking channels using channel name and type strings to functions with ``picks`` arguments, along with a convenience :meth:`mne.io.Raw.pick`, :meth:`mne.Epochs.pick`, and :meth:`mne.Evoked.pick` method, by `Eric Larson`_

- Add new tutorial on :ref:`tut-sleep-stage-classif` by `Alex Gramfort`_, `Stanislas Chambon`_ and `Joan Massich`_

- Add data fetchers for polysomnography (PSG) recordings from Physionet (:func:`mne.datasets.sleep_physionet.age.fetch_data` and :func:`mne.datasets.sleep_physionet.temazepam.fetch_data`) by `Alex Gramfort`_ and `Joan Massich`_

- Add envelope correlation code in :func:`mne.connectivity.envelope_correlation` by `Denis Engemann`_, `Sheraz Khan`_, and `Eric Larson`_

- Add option to toggle all projectors in :meth:`mne.io.Raw.plot` and related functions by `Eric Larson`_

- Add support for indexing, slicing, and iterating :class:`mne.Annotations` by `Joan Massich`_

- :meth:`mne.io.Raw.plot` now uses the lesser of ``n_channels`` and ``raw.ch_names``, by `Joan Massich`_

- Add support for FIR filtering in :meth:`mne.io.Raw.plot` and :ref:`gen_mne_browse_raw` by passing ``filtorder=0`` or ``--filtorder 0``, respectively, by `Eric Larson`_

- Add ``chunk_duration`` parameter to :func:`mne.events_from_annotations` to allow multiple events from a single annotation by `Joan Massich`_

- Add :class:`mne.simulation.SourceSimulator` class to simplify simulating SourceEstimates, by `Samuel Deslauriers-Gauthier`_, `Kostiantyn Maksymenko`_, `Nathalie Gayraud`_, `Ivana Kojcic`_, `Alex Gramfort`_, and `Eric Larson`_

- :func:`mne.io.read_raw_edf` now detects analog stim channels labeled ``'STATUS'`` and sets them as stim channel. :func:`mne.io.read_raw_edf` no longer synthesize TAL annotations into stim channel but stores them in ``raw.annotations`` when reading by `Joan Massich`_

- Add `mne.simulation.add_noise` for ad-hoc noise addition to `io.Raw`, `Epochs`, and `Evoked` instances, by `Eric Larson`_

- Add ``drop_refs=True`` parameter to :func:`set_bipolar_reference` to drop/keep anode and cathode channels after applying the reference by `Cristóbal Moënne-Loccoz`_.

- Add processing of reference MEG channels to :class:`mne.preprocessing.ICA` by `Jeff Hanna`_

- Add use of :func:`scipy.signal.windows.dpss` for faster multitaper window computations in PSD functions by `Eric Larson`_

- Add :func:`mne.morph_labels` to facilitate morphing label sets obtained from parcellations, by `Eric Larson`_

- Add :func:`mne.labels_to_stc` to facilitate working with label data, by `Eric Larson`_

- Add :func:`mne.label.select_sources` to simplify the selection of sources within a label, by `Samuel Deslauriers-Gauthier`_

- Add support for using :class:`mne.Info` in :func:`mne.simulation.simulate_raw` instead of :class:`mne.io.Raw` by `Eric Larson`_

- Add support for passing an iterable and stim channel values using ``stc`` parameter of :func:`mne.simulation.simulate_raw` by `Eric Larson`_

- Add ``overlap`` argument to :func:`mne.make_fixed_length_events` by `Eric Larson`_

- Add approximate distance-based ``spacing`` source space decimation algorithm to :func:`mne.setup_source_space` by `Eric Larson`_

- Add 448-labels subdivided aparc cortical parcellation by `Denis Engemann`_ and `Sheraz Khan`_

- Add option to improve rendering in :ref:`gen_mne_coreg` for modern graphics cards by `Eric Larson`_

- Add :func:`mne.preprocessing.mark_flat` to automate marking of flat channels and segments of raw data by `Eric Larson`_

- Add support for CUDA-based correlation computations and progress bars in :class:`mne.decoding.ReceptiveField` by `Eric Larson`_

- Add support for file-like objects in :func:`mne.io.read_raw_fif` as long as preloading is used by `Eric Larson`_

- Add keyboard shortcuts to nativate volume source estimates in time using (shift+)left/right arrow keys by `Mainak Jas`_

- Add option to SSP preprocessing functions (e.g., :func:`mne.preprocessing.compute_proj_eog` and :func:`mne.compute_proj_epochs`) to process MEG channels jointly with ``meg='combined'`` by `Eric Larson`_

- Add Epoch selection and metadata functionality to :class:`mne.time_frequency.EpochsTFR` using new mixin class by `Keith Doelling`_

- Add ``reject_by_annotation`` argument to :func:`mne.preprocessing.find_ecg_events` by `Eric Larson`_

- Add ``pca`` argument to return the rank-reduced whitener in :func:`mne.cov.compute_whitener` by `Eric Larson`_

- Add ``extrapolate`` argument to :func:`mne.viz.plot_topomap` for better control of extrapolation points placement by `Mikołaj Magnuski`_

- Add ``channel_wise`` argument to :func:`mne.io.Raw.apply_function` to allow applying a function on multiple channels at once by `Hubert Banville`_

- Add option ``copy='auto'`` to control data copying in :class:`mne.io.RawArray` by `Eric Larson`_

- The ``mri`` parameter in :func:`mne.setup_volume_source_space` is now automatically set to ``T1.mgz`` if ``subject`` is provided. This allows to get a :class:`mne.SourceSpaces` of kind ``volume`` more automatically. By `Alex Gramfort`_

- Add better ``__repr__`` for constants, and :class:`info['dig'] <mne.Info>` entries via ``DigPoint`` by `Eric Larson`_

- Allow string argument in :meth:`mne.io.Raw.drop_channels` to remove a single channel by `Clemens Brunner`_

- Add additional depth weighting options for inverse solvers (e.g., :func:`mne.inverse_sparse.gamma_map` and :func:`mne.inverse_sparse.mixed_norm`) by `Eric Larson`_

- Add depth weighting to LCMV beamformers via ``depth`` argument in :func:`mne.beamformer.make_lcmv` by `Eric Larson`_

- Allow toggling of DC removal in :meth:`mne.io.Raw.plot` by pressing the 'd' key by `Clemens Brunner`_

- Improved clicking in :meth:`mne.io.Raw.plot` (left click on trace toggles bad, left click on background sets green line, right click anywhere removes green line) by `Clemens Brunner`_

- Add ``mne.realtime.LSLClient`` for realtime data acquisition with LSL streams of data by `Teon Brooks`_ and `Mainak Jas`_

- Add partial support for PyVista as a 3D backend using :func:`mne.viz.use_3d_backend` by `Guillaume Favelier`_

- Add option ``ids = None`` in :func:`mne.event.shift_time_events` for considering all events by `Nikolas Chalas`_ and `Joan Massich`_

- Add ``mne.realtime.MockLSLStream`` to simulate an LSL stream for testing and examples by `Teon Brooks`_

- Add support for file-like objects in :func:`mne.read_epochs` as long as preloading is used by `Paul Roujansky`_

Bug
~~~

- Fix annotations in split fif files :func:`mne.io.read_raw_fif` by `Joan Massich`_

- Fix :meth:`mne.Epochs.plot` with ``scalings='auto'`` to properly compute channel-wise scalings by `Stefan Repplinger`_

- Fix :func:`mne.gui.coregistration` and :ref:`mne coreg <gen_mne_coreg>` crashing with segmentation fault when switching subjects by `Eric Larson`_

- Fix :func:`mne.io.read_raw_brainvision` to accommodate vmrk files which do not have any annotations by `Alexander Kovrig`_

- Fix :meth:`mne.io.Raw.plot` and :meth:`mne.Epochs.plot` to auto-scale ``misc`` channel types by default by `Eric Larson`_

- Fix filtering functions (e.g., :meth:`mne.io.Raw.filter`) to properly take into account the two elements in ``n_pad`` parameter by `Bruno Nicenboim`_

- Fix `feature_names` parameter change after fitting in :class:`mne.decoding.ReceptiveField` by `Jean-Remi King`_

- Fix index error in :func:`mne.io.read_raw_cnt` when creating stim_channel manually by `Joan Massich`_

- Fix bug with ``weight_norm='unit-gain'`` in :func:`mne.beamformer.make_lcmv` and :func:`mne.beamformer.make_dics` by `Britta Westner`_

- Fix 32bits annotations in :func:`mne.io.read_raw_cnt` by `Joan Massich`_

- Fix :func:`mne.events_from_annotations` to ignore ``'BAD_'` and ``'EDGE_'`` annotations by default using a new default ``regexp`` by `Eric Larson`_

- Fix bug in :func:`mne.preprocessing.mark_flat` where ``raw.first_samp`` was not taken into account by `kalenkovich`_

- Fix date parsing in :func:`mne.io.read_raw_cnt` by `Joan Massich`_

- Fix topological checks and error messages for BEM surfaces in :func:`mne.make_bem_model` by `Eric Larson`_

- Fix default HTML language of :class:`mne.Report` to be ``"en-us"`` instead of ``"fr"`` and allow setting via ``report.lang`` property by `Eric Larson`_

- Fix bug where loading epochs with ``preload=True`` and subsequently using :meth:`mne.Epochs.drop_bad` with new ``reject`` or ``flat`` entries leads to improper data (and ``epochs.selection``) since v0.16.0 by `Eric Larson`_.
  If your code uses ``Epochs(..., preload=True).drop_bad(reject=..., flat=...)``, we recommend regenerating these data.

- Fix :ref:`gen_mne_flash_bem` to properly utilize ``flash30`` images when conversion from DICOM images is used, and to properly deal with non-standard acquisition affines by `Eric Larson`_

- Fix :meth:`mne.io.Raw.set_annotations` with ``annotations=None`` to create an empty annotations object with ``orig_time`` that matches the :class:`mne.io.Raw` instance by `Eric Larson`_

- Fix :func:`mne.io.read_raw_edf` returning all the annotations with the same name in GDF files by `Joan Massich`_

- Fix boundaries during plotting of raw data with :func:`mne.io.Raw.plot` and :ref:`gen_mne_browse_raw` on scaled displays (e.g., macOS with HiDPI/Retina screens) by `Clemens Brunner`_

- Fix bug where filtering was not performed with ``lowpass`` or ``highpass`` in :meth:`mne.io.Raw.plot` and :ref:`gen_mne_browse_raw` by `Eric Larson`_

- Fix :func:`mne.simulation.simulate_evoked` that was failing to simulate the noise with heterogeneous sensor types due to poor conditioning of the noise covariance and make sure the projections from the noise covariance are taken into account `Alex Gramfort`_

- Fix checking of ``data`` dimensionality in :class:`mne.SourceEstimate` and related constructors by `Eric Larson`_

- Fix :meth:`mne.io.Raw.append` annotations miss-alignment  by `Joan Massich`_

- Fix hash bug in the ``mne.io.edf`` module when installing on Windows by `Eric Larson`_

- Fix :func:`mne.io.read_raw_edf` reading duplicate channel names by `Larry Eisenman`_

- Fix :func:`set_bipolar_reference` in the case of generating all bipolar combinations and also in the case of repeated channels in both lists (anode and cathode) by `Cristóbal Moënne-Loccoz`_

- Fix missing code for computing the median when ``method='median'`` in :meth:`mne.Epochs.average` by `Cristóbal Moënne-Loccoz`_

- Fix CTF helmet plotting in :func:`mne.viz.plot_evoked_field` by `Eric Larson`_

- Fix saving of rejection parameters in :meth:`mne.Epochs.save` by `Eric Larson`_

- Fix orientations returned by :func:`mne.dipole.get_phantom_dipoles` (half were flipped 180 degrees) by `Eric Larson`_

- Fix bug in :func:`mne.viz.plot_compare_evokeds` when ``evoked.times[0] >= 0`` would cause a problem with ``vlines='auto'`` mode by `Eric Larson`_

- Fix path bugs in :func:`mne.bem.make_flash_bem` and :ref:`gen_mne_flash_bem` by `Eric Larson`_

- Fix :meth:`mne.time_frequency.AverageTFR.plot_joint` mishandling bad channels, by `David Haslacher`_ and `Jona Sassenhagen`_

- Fix :func:`mne.beamformer.make_lcmv` failing when full rank data is used (i.e., when no projection is done) with ``reg=0.``, by `Eric Larson`_

- Fix issue with bad channels ignored in :func:`mne.beamformer.make_lcmv` and :func:`mne.beamformer.make_dics` by `Alex Gramfort`_

- Fix :func:`mne.compute_proj_raw` when ``duration != None`` not to apply existing proj and to avoid using duplicate raw data samples by `Eric Larson`_

- Fix ``reject_by_annotation`` not being passed internally by :func:`mne.preprocessing.create_ecg_epochs` and :ref:`mne clean_eog_ecg <gen_mne_clean_eog_ecg>` to :func:`mne.preprocessing.find_ecg_events` by `Eric Larson`_

- Fix :func:`mne.io.read_raw_edf` failing when EDF header fields (such as patient name) contained special characters, by `Clemens Brunner`_

- Fix :func:`mne.io.read_raw_eeglab` incorrectly parsing event durations by `Clemens Brunner`_

- Fix :func:`mne.io.read_raw_egi` when cropping non-preloaded EGI MFF data by `Alex Gramfort`_

- Fix :meth:`mne.io.Raw.interpolate_bads` for interpolating CTF MEG channels when reference sensors are present by `jeythekey`_

- Fix a bug in :meth:`mne.io.Raw.resample`, where resampling events could result in indices > n_times-1, by `jeythekey`_

- Fix :meth:`mne.preprocessing.ICA.score_sources` to use the ``sfreq`` of the raw data to filter rather than the ``sfreq`` when the ICA was fit, by `jeythekey`_

- Fix a bug in :class:`mne.preprocessing.ICA`, where manually setting the attribute ``ICA.exclude`` to an np.array resulted in the removal of random components when later also providing the ``exclude`` argument to any ``apply...``-method, by `jeythekey`_

- Ascending changed to descending sorting of scores for integer ``..._criterion`` arguments in :func:`mne.preprocessing.ICA.detect_artifacts` and :func:`mne.preprocessing.run_ica`, as it used to  be documented; the docstring in these functions was corrected for float ``..._criterion`` arguments, by `jeythekey`_

API
~~~

- Deprecate ``cov, iir_params, blink, ecg, chpi, random_state`` and support for :class:`mne.io.Raw` instance inputs in :func:`mne.simulation.simulate_raw`; use :func:`mne.simulation.add_noise`, :func:`mne.simulation.add_ecg`, :func:`mne.simulation.add_eog`, and :func:`mne.simulation.add_chpi` by `Eric Larson`_

- Add ``overwrite`` parameter in :func:`mne.Epochs.save` by `Katarina Slama`_

- Add ``stim_channel`` parameter in :func:`mne.io.read_raw_cnt` to toggle stim channel synthesis by `Joan Massich`_

- Python 2 is no longer supported; MNE-Python now requires Python 3.5+, by `Eric Larson`_

- A new class :class:`mne.VolVectorSourceEstimate` is returned by :func:`mne.minimum_norm.apply_inverse` (and related functions) when a volume source space and ``pick_ori='vector'`` is used, by `Eric Larson`_

- Converting a forward solution with a volume source space to fixed orientation using :func:`mne.convert_forward_solution` now raises an error, by `Eric Larson`_

- ``raw.estimate_rank`` has been deprecated and will be removed in 0.19 in favor of :func:`mne.compute_rank`  by `Eric Larson`_

- :class:`Annotations` are now kept sorted (by onset time) during instantiation and :meth:`~Annotations.append` operations, by `Eric Larson`_

- Deprecate :func:`mne.io.find_edf_events` by `Joan Massich`_

- Deprecate ``limit_depth_chs`` in :func:`mne.minimum_norm.make_inverse_operator` in favor of ``depth=dict(limit_depth_chs=...)`` by `Eric Larson`_

- Reading BDF and GDF files with :func:`mne.io.read_raw_edf` is deprecated and replaced by :func:`mne.io.read_raw_bdf` and :func:`mne.io.read_raw_gdf`, by `Clemens Brunner`_

- :func:`mne.forward.compute_depth_prior` has been reworked to operate directly on :class:`Forward` instance as ``forward`` rather than a representation scattered across the parameters ``G, is_fixed_ori, patch_info``, by `Eric Larson`_

- Deprecate ``method='extended-infomax'`` in :class:`mne.preprocessing.ICA`; Extended Infomax can now be computed with ``method='infomax'`` and ``fit_params=dict(extended=True)`` by `Clemens Brunner`_

- Fix support for supplying ``extrapolate`` via :meth:`ica.plot_properties(..., topomap_args=dict(extrapolate=...)) <mne.preprocessing.ICA.plot_properties>` by `Sebastian Castano`_

- The peak finder that was formerly accessible via ``from mne.preprocessing.peak_finder import peak_finder`` should now be imported directly from the enclosing namespace as ``from mne.preprocessing import peak_finder`` by `Eric Larson`_

- Deprecate ``mne.realtime`` module to make a standalone module `mne-realtime` that will live outside of this package by `Teon Brooks`_
