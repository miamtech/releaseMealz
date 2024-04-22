#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MealzcoreKotlinThrowable, MealzcoreMealz, MealzcoreSdkBuilder, MealzcoreMealzBasket, MealzcoreMealzCatalog, MealzcoreMealzEnvironment, MealzcoreMealzNotifications, MealzcoreMealzUser, MealzcoreCatalogCategory, MealzcoreAuthorization, MealzcoreKMMContext, MealzcoreMiamPreferencesContext, MealzcoreKotlinEnumCompanion, MealzcoreKotlinEnum<E>, MealzcoreOperatingSystem, MealzcoreKotlinArray<T>, MealzcoreSdkVersion, MealzcoreLogHandlerCompanion, MealzcoreLogHandlerLogLevels, MealzcoreMainExecutor, MealzcorePointOfSaleStore, MealzcoreOnGetPriceAsyncUseCaseCompanion, MealzcoreOnGetPriceAsyncUseCaseInput, MealzcoreOnGetPriceAsyncUseCase, MealzcoreAddRecipesByIdsToMealPlannerUseCaseInput, MealzcoreEnableRecipeLikeUseCaseCompanion, MealzcoreEnableRecipeLikeUseCase, MealzcoreSetProfilingAllowedUseCaseCompanion, MealzcoreSetProfilingAllowedUseCase, MealzcoreUserAuthInfo, MealzcoreComponentUiState, MealzcoreExecutorHelperCompanion, MealzcoreKotlinx_coroutines_coreCoroutineDispatcher, MealzcoreKotlinAbstractCoroutineContextElement, MealzcoreKotlinx_coroutines_coreCoroutineDispatcherKey, MealzcoreMainLoopDispatcher, MealzcoreBasicUiState<__covariant T>, MealzcoreBasicUiStateEmpty, MealzcoreKotlinNothing, MealzcoreBasicUiStateError, MealzcoreBasicUiStateIdle, MealzcoreBasicUiStateLoading, MealzcoreBasicUiStateSuccess<T>, MealzcoreMealzDI, MealzcoreAnalytics, MealzcoreSingletonPreferencesViewModel, MealzcorePricingRepositoryImp, MealzcoreRecipeRepositoryImp, MealzcoreRouteService, MealzcoreSdkRequirement, MealzcoreToasterNotification, MealzcoreToasterNotificationRecipeAdded, MealzcoreToasterNotificationRecipeLiked, MealzcoreAbstractNotifier<T1>, MealzcoreUserNotification, MealzcoreUserNotificationTokenExpired, MealzcoreUserNotificationUserConnected, MealzcoreUserNotificationUserDisconnected, MealzcoreBasketEntry, MealzcoreDynamicRecipeDetailNotification, MealzcoreDynamicRecipeDetailNotificationChildReady, MealzcoreDynamicRecipeDetailNotificationGoToItemSelector, MealzcoreDynamicRecipeDetailNotificationProductAdded, MealzcoreDynamicRecipeDetailNotificationProductQtyUpdated, MealzcoreDynamicRecipeDetailNotificationProductRemoved, MealzcoreDynamicRecipeDetailNotificationProductReplaced, MealzcoreBasketNotification, MealzcoreBasketNotificationBasketConfirmed, MealzcoreBasket, MealzcoreBasketNotificationBasketInit, MealzcoreBasketNotificationBasketReloaded, MealzcoreBasketNotificationBasketReset, MealzcoreBasketNotificationBasketUpdated, MealzcoreBasketNotificationBasketUpdating, MealzcoreBasketNotificationComparatorIsReady, MealzcoreBasketNotificationComparatorIsReset, MealzcoreBasketNotificationEntriesAltered, MealzcoreBasketNotificationEntryAdded, MealzcoreBasketNotificationEntryItemReplaced, MealzcoreBasketNotificationEntryQuantityUpdated, MealzcoreBasketNotificationEntryRemoved, MealzcoreBasketNotificationRecipeCountChanged, MealzcoreBasketNotificationRecipesAdded, MealzcoreBasketNotificationRecipesRemoved, MealzcoreBasketNotificationRecipesUpdated, MealzcoreMealPlannerBasketPreviewNotification, MealzcoreMealPlannerBasketPreviewNotificationRecipeRowLoading, MealzcoreMealPlannerBasketPreviewNotificationRecipeRowReady, MealzcorePreferencesNotification, MealzcorePreferencesNotificationPreferencesLoaded, MealzcorePreferencesNotificationPreferencesUpdated, MealzcoreLikeEffect, MealzcoreLikeEffectDisliked, MealzcoreRecipe, MealzcoreLikeEffectLiked, MealzcoreRecipeLike, MealzcoreLikeStoreInstance, MealzcoreLikeStore, MealzcoreMealPlannerState, MealzcorePointOfSaleAction, MealzcorePointOfSaleActionSetPos, MealzcorePointOfSaleState, MealzcoreUserState, MealzcoreUserStoreImplCompanion, MealzcoreUserAction, MealzcoreAvailabilityState, MealzcoreBasketAction, MealzcoreBasketActionRefreshBasket, MealzcoreBasketActionResetBasket, MealzcoreBasketState, MealzcoreBasketComparisonItem, MealzcoreBasketComparator, MealzcoreSupplierProduct, MealzcoreAlterQuantityBasketEntry, MealzcoreBasketComparatorData, MealzcorePricing, MealzcoreClient, MealzcorePricingDataSourceImpCompanion, MealzcoreRecipePricing, MealzcoreSuggestionsCriteria, MealzcoreRecipeSort, MealzcoreRecipeFilter, MealzcoreBudgetRepositoryCompanion, MealzcoreSponsorBlock, MealzcoreRecipeRepositoryImpCompanion, MealzcoreSupplier, MealzcoreIngredient, MealzcoreRecipeInfos, MealzcoreBaseViewModel<Event, State, Effect>, MealzcoreRecipeLikeContractState, MealzcoreRecipeLikeContractEvent, MealzcoreRecipeLikeContractEffect, MealzcoreFactoryViewModel<T>, MealzcoreLikeButtonViewModelFactoryCompanion, MealzcoreLikeButtonViewModel, MealzcorePricingContractState, MealzcorePricingContractEvent, MealzcorePricingContractEffect, MealzcoreBasketTagContractEvent, MealzcoreBasketTagContractEventSetRetailerProductId, MealzcoreBasketTagContractState, MealzcoreRouterOutletViewModel, MealzcoreBasketTagContractEffect, MealzcoreTag, MealzcorePreferencesSearchContractState, MealzcorePreferencesSearchContractEvent, MealzcorePreferencesSearchContractEffect, MealzcoreRecipeContractEffect, MealzcoreRecipeContractEffectDisliked, MealzcoreRecipeContractEffectHideCard, MealzcoreRecipeContractEvent, MealzcoreRecipeContractEventError, MealzcoreRecipeContractEventFetchRecipeFromCriteria, MealzcoreRecipeContractEventFetchRecipeFromId, MealzcoreRecipeContractEventGoToDetail, MealzcoreRecipeContractState, MealzcoreRouterContent, MealzcoreRouterOutletContractEvent, MealzcoreRecipeViewModel, MealzcoreRouterOutletContractEventGoToDetail, MealzcoreRouterOutletContractEventGoToHelper, MealzcoreRouterOutletContractEventGoToItemSelector, MealzcoreRouterOutletContractEventGoToPreview, MealzcoreSponsor, MealzcoreRouterOutletContractEventGoToSponsor, MealzcoreRouterOutletContractEventOpenDialog, MealzcoreRouterOutletContractEventPrevious, MealzcoreRouterOutletContractState, MealzcoreRouterOutletContractEffect, MealzcoreFilterViewModelCompanion, MealzcoreFilterContractState, MealzcoreFilterContractEvent, MealzcoreFilterContractEffect, MealzcoreFilterViewModel, MealzcoreFilterViewModelFactoryCompanion, MealzcoreFilterViewModelFactory, MealzcoreMealPlannerRecapContractState, MealzcoreMealPlannerRecapContractEvent, MealzcoreMealPlannerRecapContractEffect, MealzcoreMealPlannerMealsContractState, MealzcoreMealPlannerMealsContractEvent, MealzcoreMealPlannerMealsContractEffect, MealzcoreRecipesPageContractState, MealzcoreRecipesPageContractEvent, MealzcoreRecipesPageContractEffect, MealzcoreRecipesPageViewModel, MealzcoreMealPlannerFormContractState, MealzcoreMealPlannerFormContractEvent, MealzcoreMealPlannerStore, MealzcoreMealPlannerFormContractEffect, MealzcoreMealPlannerBasketPreviewContractState, MealzcoreMealPlannerBasketPreviewContractEvent, MealzcoreMealPlannerBasketPreviewContractEffect, MealzcoreDynamicRecipeDetailContractState, MealzcoreDynamicRecipeDetailContractEvent, MealzcoreDynamicRecipeDetailFooterViewModel, MealzcoreDynamicRecipeDetailContractEffect, MealzcoreDynamicRecipeDetailViewModel, MealzcoreRecipeRowState, MealzcoreProductContractEvent, MealzcoreProductContractEventAddFromParentIfPossible, MealzcoreProductContractEventAddProduct, MealzcoreProductContractEventIgnoreIngredient, MealzcoreProductContractEventInit, MealzcoreProductContractEventLockFromParent, MealzcoreProductContractEventReplaceProduct, MealzcoreProductContractEventSetGuests, MealzcoreProductContractEventUnLockFromParent, MealzcoreProductContractEventUpdateProductQty, MealzcoreProductContractState, MealzcoreDynamicRecipeDetailNotifier, MealzcoreProductContractEffect, MealzcoreDynamicRecipeDetailContractEventAddAllRemainingIngredients, MealzcoreDynamicRecipeDetailContractEventReset, MealzcoreDynamicRecipeDetailContractEventSetRecipeId, MealzcoreDynamicRecipeDetailContractEventUpdateGuests, MealzcoreFavoritePageContractEvent, MealzcoreFavoritePageContractEventLoadPage, MealzcoreFavoritePageContractState, MealzcoreFavoritePageViewModelCompanion, MealzcoreFavoritePageContractEffect, MealzcoreCatalogContent, MealzcoreCatalogContractEvent, MealzcoreCatalogContractEventGoBack, MealzcoreCatalogContractEventGoToFavorite, MealzcorePackage, MealzcoreDialogContent, MealzcoreCatalogContractState, MealzcoreCatalogViewModelCompanion, MealzcoreCatalogContractEffect, MealzcoreFactoryViewModelViewModelContainer<T>, MealzcoreQuantityFormatterDefault, MealzcoreSponsorDetailsContractState, MealzcoreSponsorDetailsContractEvent, MealzcoreSponsorDetailsContractEffect, MealzcoreBasketPreviewContractEvent, MealzcoreBasketPreviewContractEventCloseItemSelector, MealzcoreBasketPreviewContractEventKillJob, MealzcoreBasketPreviewContractEventRemoveRecipe, MealzcoreBasketPreviewContractEventReplaceItem, MealzcoreBasketPreviewContractEventToggleLine, MealzcoreBasketPreviewInfo, MealzcoreBasketPreviewContractState, MealzcoreBasketPreviewContractEffect, MealzcoreBasketPreviewViewModelLineUpdateState, MealzcoreDynamicRecipeDetailFooterContractEvent, MealzcoreDynamicRecipeDetailFooterContractEventLockFromParent, MealzcoreDynamicRecipeDetailFooterContractEventOnTapContinueShopping, MealzcoreDynamicRecipeDetailFooterContractEventSetGuests, MealzcoreDynamicRecipeDetailFooterContractEventSetIngredientsStatus, MealzcoreDynamicRecipeDetailFooterContractEventSetRecipe, MealzcoreDynamicRecipeDetailFooterContractEventUnLockFromParent, MealzcoreIngredientStatus, MealzcoreDynamicRecipeDetailFooterContractState, MealzcoreDynamicRecipeDetailFooterContractEffect, MealzcoreIngredientStatusTypes, MealzcoreSponsorDetailState, MealzcoreFilterContractEffectOnUpdate, MealzcoreCatalogFilterOptions, MealzcoreFilterContractEventOnCostFilterChanged, MealzcoreFilterContractEventOnDifficultyChanged, MealzcoreFilterContractEventOnTimeFilterChanged, MealzcoreFilterEffect, MealzcoreFilterEffectOnUpdate, MealzcoreFilterInstanceType, MealzcoreRecipeCarouselContractEvent, MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria, MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromId, MealzcoreRecipeCarouselContractState, MealzcoreRecipeCarouselContractEffect, MealzcorePreferencesContent, MealzcoreCheckableTag, MealzcorePreferencesContractState, MealzcorePreferencesViewModelInstance, MealzcoreSingletonPreferencesViewModelCompanion, MealzcorePreferencesContractEvent, MealzcorePreferencesContractEffect, MealzcoreMyMealContractState, MealzcoreMyMealContractEvent, MealzcoreMyMealContractEffect, MealzcoreMyMealButtonContractState, MealzcoreMyMealButtonContractEvent, MealzcoreMyMealButtonContractEffect, MealzcoreItemSelectorContractEvent, MealzcoreItemSelectorContractEventInitWithIngredientId, MealzcoreItemSelectorContractEventReturnToDetail, MealzcoreItemSelectorContractEventSearch, MealzcoreItem, MealzcoreItemSelectorContractEventSelectItem, MealzcoreItemSelectorContractState, MealzcoreItemSelectorEmptyStates, MealzcoreItemSelectorContractEffect, MealzcoreI18nResolver, MealzcoreI18n, NSBundle, MealzcoreLocalisation, MealzcoreLocalisationBasket, MealzcoreLocalisationBudget, MealzcoreLocalisationCatalog, MealzcoreLocalisationCounter, MealzcoreLocalisationError, MealzcoreLocalisationFavorites, MealzcoreLocalisationFilters, MealzcoreLocalisationIngredient, MealzcoreLocalisationItemSelector, MealzcoreLocalisationMyBasket, MealzcoreLocalisationMyMeals, MealzcoreLocalisationPreferences, MealzcoreLocalisationPrice, MealzcoreLocalisationRecipe, MealzcoreLocalisationRecipeDetails, MealzcoreLocalisationSponsorBanner, MealzcoreLocalisationSponsorDetail, MealzcoreLocalisationTag, MealzcoreI18nCompanion, MealzcoreResourcesPluralsResource, MealzcoreResourcesStringResource, MealzcoreNoResourceThrowable, MealzcoreAnalyticsPlausibleProps, MealzcoreAnalyticEvent, MealzcoreAnalyticsCompanion, MealzcoreAnalyticsPlausibleEventCompanion, MealzcoreAnalyticsPlausibleEvent, MealzcoreAnalyticsPlausiblePathsCompanion, MealzcoreAnalyticsPlausiblePaths, MealzcoreAnalyticsPlausiblePropsCompanion, MealzcoreAnalyticsInstance, MealzcoreRoute, MealzcoreDialogRoute, MealzcorePageRoute, MealzcoreRouteServiceAction, MealzcoreRouteServiceActionSetDialogRoute, MealzcoreRouteServiceActionSetInitialPageRoute, MealzcoreRouteServiceActionSetPageRoute, MealzcoreRouteServiceEffect, MealzcoreRouteServiceEffectRouteChanged, MealzcoreRouteServiceInstance, MealzcoreRouteServiceState, MealzcoreUserPreferencesInstance, MealzcoreUserPreferences, MealzcoreAttributesCompanion, MealzcoreRecordCompanion, MealzcoreKotlinx_serialization_jsonJsonElement, MealzcoreAttributes, MealzcoreRelationships, MealzcoreRecord, MealzcoreBasketCompanion, MealzcoreBasketAttributes, MealzcoreBasketRelationships, MealzcoreAttributesField, MealzcoreBasketAttributesCompanion, MealzcoreBasketEntriesItemCompanion, MealzcoreBasketEntriesItem, MealzcoreBasketEntryCompanion, MealzcoreBasketEntryAttributes, MealzcoreBasketEntryRelationships, MealzcoreBasketEntryCompanionStates, MealzcoreBasketEntryAttributesCompanion, MealzcoreRelationshipListCompanion, MealzcoreRelationshipList, MealzcoreBasketEntryRelationshipListCompanion, MealzcoreBasketEntryRelationshipListSerializer, MealzcoreBasketEntryRelationshipList, MealzcoreRelationshipsCompanion, MealzcoreItemRelationshipList, MealzcoreItemRelationship, MealzcoreBasketEntryRelationshipsCompanion, MealzcoreBasketRelationshipsCompanion, MealzcoreTagTypes, MealzcoreCheckableTagCompanion, MealzcoreIngredientCompanion, MealzcoreIngredientAttributes, MealzcoreIngredientRelationships, MealzcoreIngredientAttributesCompanion, MealzcoreIngredientListRelationshipCompanion, MealzcoreIngredientListSerializer, MealzcoreIngredientListRelationship, MealzcoreItemCompanion, MealzcoreItemAttributes, MealzcoreItemRelationships, MealzcoreItemAttributesCompanion, MealzcoreRelationshipCompanion, MealzcoreRelationship, MealzcoreItemRelationshipCompanion, MealzcoreItemRelationshipListCompanion, MealzcoreItemRelationshipListSerializer, MealzcoreItemRelationshipSerializer, MealzcoreItemRelationshipsCompanion, MealzcoreMealPlannerRecipe, MealzcoreMiamConfigCompanion, MealzcoreMiamConfig, MealzcorePackageCompanion, MealzcorePackageAttributes, MealzcorePackageRelationships, MealzcorePackageSettings, MealzcorePackageAttributesCompanion, MealzcoreRecipeRelationshipList, MealzcorePackageRelationshipsCompanion, MealzcorePackageSettingsCompanion, MealzcorePointOfSaleCompanion, MealzcorePointOfSale, MealzcorePointOfSaleWrapperCompanion, MealzcorePointOfSaleWrapper, MealzcorePointOfSalesCompanion, MealzcorePointOfSales, MealzcorePricingCompanion, MealzcoreRecipeCompanion, MealzcoreRecipeAttributes, MealzcoreRecipeRelationships, MealzcoreRecipeDifficulty, MealzcoreRecipeStep, MealzcoreRecipeAttributesCompanion, MealzcoreRecipeInfosCompanion, MealzcoreRecipeLikeCompanion, MealzcoreRecipeLikeAttributes, MealzcoreRecipeLikeRelationships, MealzcoreRecipeLikeAttributesCompanion, MealzcoreRecipeLikeRelationshipsCompanion, MealzcoreRecipePlanCompanion, MealzcoreRecipePlan, MealzcoreRecipePricingCompanion, MealzcoreRecipeRelationshipListCompanion, MealzcoreRecipeRelationshipListSerializer, MealzcoreSponsorListRelationship, MealzcoreRecipeStepListRelationship, MealzcoreTagListRelationship, MealzcoreRecipeRelationshipsCompanion, MealzcoreRecipeStepCompanion, MealzcoreRecipeStepAttributes, MealzcoreRecipeStepRelationships, MealzcoreRecipeStepAttributesCompanion, MealzcoreRecipeStepListListSerializer, MealzcoreRecipeStepListRelationshipCompanion, MealzcoreRecipeStepRelationshipsCompanion, MealzcoreRecordLink, MealzcoreRecordCounterWrapperCompanion, MealzcoreRecordCounterWrapper, MealzcoreRecordLinkCompanion, MealzcoreRecordWrapperCompanion, MealzcoreRecordWrapper, MealzcoreSponsorCompanion, MealzcoreSponsorAttributes, MealzcoreSponsorRelationships, MealzcoreSponsorAttributesCompanion, MealzcoreSponsorBlockCompanion, MealzcoreSponsorBlockAttributes, MealzcoreSponsorBlockRelationships, MealzcoreSponsorBlockAttributesCompanion, MealzcoreSponsorBlockRelationshipName, MealzcoreSponsorBlockTypeRelationship, MealzcoreSponsorBlockRelationshipsCompanion, MealzcoreSponsorBlockTypeCompanion, MealzcoreSponsorBlockTypeAttributes, MealzcoreSponsorBlockTypeRelationships, MealzcoreSponsorBlockType, MealzcoreSponsorBlockTypeAttributesCompanion, MealzcoreSponsorBlockTypeRelationshipCompanion, MealzcoreSponsorBlockTypeSerializer, MealzcoreSponsorBlockTypesList, MealzcoreSponsorBlocksRelationshipsCompanion, MealzcoreSponsorBlocksSerializer, MealzcoreSponsorBlocksRelationships, MealzcoreSponsorListRelationshipCompanion, MealzcoreSponsorListSerializer, MealzcoreSponsorRelationshipName, MealzcoreSponsorRelationshipsCompanion, MealzcoreSuggestionsCriteriaCompanion, MealzcoreSupplierCompanion, MealzcoreSupplierAttributes, MealzcoreSupplierRelationships, MealzcoreSupplierAttributesCompanion, MealzcoreSupplierNotificationWrapperCompanion, MealzcoreSupplierNotificationWrapper, MealzcoreTagCompanion, MealzcoreTagAttributes, MealzcoreTagRelationships, MealzcoreTagAttributesCompanion, MealzcoreTagListListSerializer, MealzcoreTagListRelationshipCompanion, MealzcoreCustomDurationSerializer, MealzcoreBasketFakeFactory, MealzcoreIngredientFakeFactory, MealzcoreItemFakeFactory, MealzcorePackageFakeFactory, MealzcorePointOfSaleFakeFactory, MealzcoreRecipeFakeFactory, MealzcoreRecipeLikeFakeFactory, MealzcoreRecipeStepFakeFactory, MealzcoreSponsorBlockFakeFactory, MealzcoreSponsorBlockTypeFakeFactory, MealzcoreSponsorFakeFactory, MealzcoreSupplierFakeFactory, MealzcoreTagFakeFactory, MealzcoreMealzImages, MealzcoreResourcesImageResource, MealzcoreSubscriptionConfigBuilder, MealzcoreBasketSubscriptionBuilder, MealzcoreSdkRequirementBuilder, MealzcoreKotlinx_serialization_jsonJson, MealzcoreKotlinException, MealzcoreKotlinRuntimeException, MealzcoreKotlinIllegalStateException, MealzcoreKotlinCancellationException, MealzcoreKotlinAbstractCoroutineContextKey<B, E>, MealzcoreKotlinx_serialization_jsonJsonElementCompanion, MealzcoreKotlinx_serialization_coreSerializersModule, MealzcoreKotlinx_serialization_coreSerialKind, UIImage, MealzcoreKotlinx_serialization_jsonJsonDefault, MealzcoreKotlinx_serialization_jsonJsonConfiguration, MealzcoreKotlinx_coroutines_coreAtomicDesc, MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, MealzcoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, MealzcoreKotlinx_coroutines_coreOpDescriptor, MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode, MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol MealzcoreKotlinx_coroutines_coreFlowCollector, MealzcoreKotlinx_coroutines_coreFlow, MealzcoreClosable, MealzcoreKotlinx_coroutines_coreCoroutineScope, MealzcoreKotlinCoroutineContext, MealzcoreNotifier, MealzcoreKotlinComparable, MealzcoreRecipeRepository, MealzcoreKotlinx_coroutines_coreDeferred, MealzcoreIExecutorScope, MealzcoreBasketStore, MealzcorePricingRepository, MealzcoreUserStore, MealzcoreKotlinx_coroutines_coreJob, MealzcoreKotlinCoroutineContextKey, MealzcoreKotlinCoroutineContextElement, MealzcoreKotlinContinuation, MealzcoreKotlinContinuationInterceptor, MealzcoreKotlinx_coroutines_coreRunnable, MealzcoreKotlinx_coroutines_coreSharedFlow, MealzcoreKotlinx_coroutines_coreStateFlow, MealzcoreAction, MealzcoreKotlinx_coroutines_coreMutableSharedFlow, MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler, MealzcoreEffect, MealzcoreState, MealzcoreStore, MealzcoreKotlinx_coroutines_coreMutableStateFlow, MealzcorePricingDataSource, MealzcoreRecipeDataSource, MealzcoreBasketPublisher, MealzcoreBasketSubscriber, MealzcoreUiEffect, MealzcoreUiEvent, MealzcoreUiState, MealzcoreSponsorDetailViewModel, MealzcoreI18nResource, MealzcoreKotlinx_serialization_coreKSerializer, MealzcoreKotlinKClass, MealzcoreKotlinx_serialization_coreEncoder, MealzcoreKotlinx_serialization_coreSerialDescriptor, MealzcoreKotlinx_serialization_coreSerializationStrategy, MealzcoreKotlinx_serialization_coreDecoder, MealzcoreKotlinx_serialization_coreDeserializationStrategy, MealzcoreResourcesStringDesc, MealzcoreKotlinIterator, MealzcoreKotlinx_coroutines_coreSelectClause1, MealzcoreKotlinx_coroutines_coreChildHandle, MealzcoreKotlinx_coroutines_coreChildJob, MealzcoreKotlinx_coroutines_coreDisposableHandle, MealzcoreKotlinSequence, MealzcoreKotlinx_coroutines_coreSelectClause0, MealzcoreKotlinKDeclarationContainer, MealzcoreKotlinKAnnotatedElement, MealzcoreKotlinKClassifier, MealzcoreKotlinx_serialization_coreCompositeEncoder, MealzcoreKotlinAnnotation, MealzcoreKotlinx_serialization_coreCompositeDecoder, MealzcoreKotlinx_serialization_coreSerialFormat, MealzcoreKotlinx_serialization_coreStringFormat, MealzcoreKotlinx_coroutines_coreSelectInstance, MealzcoreKotlinSuspendFunction1, MealzcoreKotlinx_coroutines_coreParentJob, MealzcoreKotlinSuspendFunction0, MealzcoreKotlinx_serialization_coreSerializersModuleCollector, MealzcoreKotlinFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MealzcoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MealzcoreBase (MealzcoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MealzcoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MealzcoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMealzcoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MealzcoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MealzcoreByte : MealzcoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MealzcoreUByte : MealzcoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MealzcoreShort : MealzcoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MealzcoreUShort : MealzcoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MealzcoreInt : MealzcoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MealzcoreUInt : MealzcoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MealzcoreLong : MealzcoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MealzcoreULong : MealzcoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MealzcoreFloat : MealzcoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MealzcoreDouble : MealzcoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MealzcoreBoolean : MealzcoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MealzcoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MealzcoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface MealzcoreFlowWrapper<T> : MealzcoreBase <MealzcoreKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<MealzcoreKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (id<MealzcoreClosable>)collectCoroutineScope:(id<MealzcoreKotlinx_coroutines_coreCoroutineScope>)coroutineScope onEach:(void (^)(T _Nullable))onEach onThrow:(void (^ _Nullable)(MealzcoreKotlinThrowable *))onThrow __attribute__((swift_name("collect(coroutineScope:onEach:onThrow:)")));
- (id<MealzcoreClosable>)collectCoroutineScope:(id<MealzcoreKotlinx_coroutines_coreCoroutineScope>)coroutineScope coroutineContext:(id<MealzcoreKotlinCoroutineContext>)coroutineContext onEach:(void (^ _Nullable)(T _Nullable))onEach onComplete:(void (^ _Nullable)(void))onComplete onThrow:(void (^ _Nullable)(MealzcoreKotlinThrowable *))onThrow __attribute__((swift_name("collect(coroutineScope:coroutineContext:onEach:onComplete:onThrow:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MealzcoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("KMMContext")))
@interface MealzcoreKMMContext : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz")))
@interface MealzcoreMealz : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mealz __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealz *shared __attribute__((swift_name("shared")));
- (void)CoreInit:(void (^)(MealzcoreSdkBuilder *))init __attribute__((swift_name("Core(init:)")));
@property (readonly) MealzcoreMealzBasket *basket __attribute__((swift_name("basket")));
@property (readonly) MealzcoreMealzCatalog *catalog __attribute__((swift_name("catalog")));
@property (readonly) MealzcoreMealzEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) MealzcoreMealzNotifications *notifications __attribute__((swift_name("notifications")));
@property (readonly) MealzcoreMealzUser *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz.Basket")))
@interface MealzcoreMealzBasket : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzBasket *shared __attribute__((swift_name("shared")));
- (void)clear __attribute__((swift_name("clear()")));
- (int32_t)getRecipeCountInBasket __attribute__((swift_name("getRecipeCountInBasket()")));
- (void)handlePaymentTotalAmount:(double)totalAmount __attribute__((swift_name("handlePayment(totalAmount:)")));
- (void)setPriceBookPriceBookId:(NSString *)priceBookId __attribute__((swift_name("setPriceBook(priceBookId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz.Catalog")))
@interface MealzcoreMealzCatalog : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)catalog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzCatalog *shared __attribute__((swift_name("shared")));
- (void)getCatalogCategoriesSetLocalCategories:(void (^)(NSArray<MealzcoreCatalogCategory *> *))setLocalCategories __attribute__((swift_name("getCatalogCategories(setLocalCategories:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz.Environment")))
@interface MealzcoreMealzEnvironment : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)environment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzEnvironment *shared __attribute__((swift_name("shared")));
- (BOOL)isAvailable __attribute__((swift_name("isAvailable()")));
- (void)setAllowsSponsoredProductsIsAllowed:(BOOL)isAllowed __attribute__((swift_name("setAllowsSponsoredProducts(isAllowed:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz.Notifications")))
@interface MealzcoreMealzNotifications : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notifications __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzNotifications *shared __attribute__((swift_name("shared")));
@property (readonly) id<MealzcoreNotifier> analytics __attribute__((swift_name("analytics")));
@property (readonly) id<MealzcoreNotifier> availability __attribute__((swift_name("availability")));
@property (readonly) id<MealzcoreNotifier> preferences __attribute__((swift_name("preferences")));
@property (readonly) id<MealzcoreNotifier> recipesCount __attribute__((swift_name("recipesCount")));
@property (readonly) id<MealzcoreNotifier> toaster __attribute__((swift_name("toaster")));
@property (readonly) id<MealzcoreNotifier> user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mealz.User")))
@interface MealzcoreMealzUser : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzUser *shared __attribute__((swift_name("shared")));
- (void)refreshTokenToken:(NSString *)token __attribute__((swift_name("refreshToken(token:)")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowanceAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowance(allowance:)")));
- (void)setStoreIdStoreId:(NSString *)storeId __attribute__((swift_name("setStoreId(storeId:)")));
- (void)updateUserIdUserId:(NSString * _Nullable)userId authorization:(MealzcoreAuthorization *)authorization __attribute__((swift_name("updateUserId(userId:authorization:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamPreferencesContext")))
@interface MealzcoreMiamPreferencesContext : MealzcoreKMMContext
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)miamPreferencesContext __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMiamPreferencesContext *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MealzcoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MealzcoreKotlinEnum<E> : MealzcoreBase <MealzcoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperatingSystem")))
@interface MealzcoreOperatingSystem : MealzcoreKotlinEnum<MealzcoreOperatingSystem *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreOperatingSystem *android __attribute__((swift_name("android")));
@property (class, readonly) MealzcoreOperatingSystem *ios __attribute__((swift_name("ios")));
+ (MealzcoreKotlinArray<MealzcoreOperatingSystem *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkVersion")))
@interface MealzcoreSdkVersion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sdkVersion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSdkVersion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogHandler")))
@interface MealzcoreLogHandler : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreLogHandlerCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogHandler.Companion")))
@interface MealzcoreLogHandlerCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLogHandlerCompanion *shared __attribute__((swift_name("shared")));
- (void)doInitDebug:(void (^)(NSString *))debug info:(void (^)(NSString *))info warn:(void (^)(NSString *))warn error:(void (^)(NSString *))error logLevel:(MealzcoreLogHandlerLogLevels *)logLevel __attribute__((swift_name("doInit(debug:info:warn:error:logLevel:)")));
@property void (^debug)(NSString *) __attribute__((swift_name("debug")));
@property void (^error)(NSString *) __attribute__((swift_name("error")));
@property void (^info)(NSString *) __attribute__((swift_name("info")));
@property MealzcoreLogHandlerLogLevels *logLevel __attribute__((swift_name("logLevel")));
@property void (^warn)(NSString *) __attribute__((swift_name("warn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogHandler.LogLevels")))
@interface MealzcoreLogHandlerLogLevels : MealzcoreKotlinEnum<MealzcoreLogHandlerLogLevels *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreLogHandlerLogLevels *allLogs __attribute__((swift_name("allLogs")));
@property (class, readonly) MealzcoreLogHandlerLogLevels *errorsOnly __attribute__((swift_name("errorsOnly")));
@property (class, readonly) MealzcoreLogHandlerLogLevels *errorsAndWarns __attribute__((swift_name("errorsAndWarns")));
@property (class, readonly) MealzcoreLogHandlerLogLevels *noLogs __attribute__((swift_name("noLogs")));
+ (MealzcoreKotlinArray<MealzcoreLogHandlerLogLevels *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MealzcoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchRecipeWithRelationsUseCase")))
@interface MealzcoreFetchRecipeWithRelationsUseCase : MealzcoreBase <MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithRecipeRepository:(id<MealzcoreRecipeRepository>)recipeRepository __attribute__((swift_name("init(recipeRepository:)"))) __attribute__((objc_designated_initializer));
- (id<MealzcoreKotlinx_coroutines_coreDeferred>)invokeInput:(NSString *)input __attribute__((swift_name("invoke(input:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("IExecutorScope")))
@protocol MealzcoreIExecutorScope
@required
- (void)attach __attribute__((swift_name("attach()")));
- (void)detach __attribute__((swift_name("detach()")));
@end

__attribute__((swift_name("MainExecutor")))
@interface MealzcoreMainExecutor : MealzcoreBase <MealzcoreIExecutorScope, MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)attach __attribute__((swift_name("attach()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)collectFlow:(id<MealzcoreKotlinx_coroutines_coreFlow>)flow collect:(void (^)(id _Nullable))collect __attribute__((swift_name("collect(flow:collect:)")));
- (void)detach __attribute__((swift_name("detach()")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCase")))
@interface MealzcoreOnGetPriceAsyncUseCase : MealzcoreMainExecutor
- (instancetype)initWithBasketStore:(id<MealzcoreBasketStore>)basketStore pricingRepository:(id<MealzcorePricingRepository>)pricingRepository pointOfSaleStore:(MealzcorePointOfSaleStore *)pointOfSaleStore __attribute__((swift_name("init(basketStore:pricingRepository:pointOfSaleStore:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MealzcoreOnGetPriceAsyncUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (id<MealzcoreKotlinx_coroutines_coreDeferred>)invokeInput:(MealzcoreOnGetPriceAsyncUseCaseInput *)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCase.Companion")))
@interface MealzcoreOnGetPriceAsyncUseCaseCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreOnGetPriceAsyncUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreOnGetPriceAsyncUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCaseInput")))
@interface MealzcoreOnGetPriceAsyncUseCaseInput : MealzcoreBase
- (instancetype)initWithRecipeId:(NSString *)recipeId guestCount:(int32_t)guestCount __attribute__((swift_name("init(recipeId:guestCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreOnGetPriceAsyncUseCaseInput *)doCopyRecipeId:(NSString *)recipeId guestCount:(int32_t)guestCount __attribute__((swift_name("doCopy(recipeId:guestCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guestCount __attribute__((swift_name("guestCount")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddRecipesByIdsToMealPlannerUseCaseInput")))
@interface MealzcoreAddRecipesByIdsToMealPlannerUseCaseInput : MealzcoreBase
- (instancetype)initWithIndex:(int32_t)index newRecipeId:(NSString *)newRecipeId __attribute__((swift_name("init(index:newRecipeId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAddRecipesByIdsToMealPlannerUseCaseInput *)doCopyIndex:(int32_t)index newRecipeId:(NSString *)newRecipeId __attribute__((swift_name("doCopy(index:newRecipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly, getter=doNewRecipeId) NSString *newRecipeId __attribute__((swift_name("newRecipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableRecipeLikeUseCase")))
@interface MealzcoreEnableRecipeLikeUseCase : MealzcoreBase
- (instancetype)initWithUserStore:(id<MealzcoreUserStore>)userStore __attribute__((swift_name("init(userStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreEnableRecipeLikeUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(BOOL)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableRecipeLikeUseCase.Companion")))
@interface MealzcoreEnableRecipeLikeUseCaseCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreEnableRecipeLikeUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreEnableRecipeLikeUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetProfilingAllowedUseCase")))
@interface MealzcoreSetProfilingAllowedUseCase : MealzcoreBase
- (instancetype)initWithUserStore:(id<MealzcoreUserStore>)userStore __attribute__((swift_name("init(userStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSetProfilingAllowedUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(BOOL)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetProfilingAllowedUseCase.Companion")))
@interface MealzcoreSetProfilingAllowedUseCaseCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSetProfilingAllowedUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreSetProfilingAllowedUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthInfo")))
@interface MealzcoreUserAuthInfo : MealzcoreBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId authorization:(MealzcoreAuthorization *)authorization __attribute__((swift_name("init(userId:authorization:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAuthorization *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreUserAuthInfo *)doCopyUserId:(NSString * _Nullable)userId authorization:(MealzcoreAuthorization *)authorization __attribute__((swift_name("doCopy(userId:authorization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreAuthorization *authorization __attribute__((swift_name("authorization")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((swift_name("Closable")))
@protocol MealzcoreClosable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentUiState")))
@interface MealzcoreComponentUiState : MealzcoreKotlinEnum<MealzcoreComponentUiState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreComponentUiState *success __attribute__((swift_name("success")));
@property (class, readonly) MealzcoreComponentUiState *error __attribute__((swift_name("error")));
@property (class, readonly) MealzcoreComponentUiState *loading __attribute__((swift_name("loading")));
@property (class, readonly) MealzcoreComponentUiState *empty __attribute__((swift_name("empty")));
@property (class, readonly) MealzcoreComponentUiState *idle __attribute__((swift_name("idle")));
@property (class, readonly) MealzcoreComponentUiState *locked __attribute__((swift_name("locked")));
+ (MealzcoreKotlinArray<MealzcoreComponentUiState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorHelper")))
@interface MealzcoreExecutorHelper : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreExecutorHelperCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorHelper.Companion")))
@interface MealzcoreExecutorHelperCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreExecutorHelperCompanion *shared __attribute__((swift_name("shared")));
- (void)cancelRunningJobJob:(id<MealzcoreKotlinx_coroutines_coreJob> _Nullable)job __attribute__((swift_name("cancelRunningJob(job:)")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)emptyJob __attribute__((swift_name("emptyJob()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface MealzcoreMainDispatcher : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MealzcoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MealzcoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MealzcoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MealzcoreKotlinCoroutineContextElement> _Nullable)getKey:(id<MealzcoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MealzcoreKotlinCoroutineContext>)minusKeyKey:(id<MealzcoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MealzcoreKotlinCoroutineContext>)plusContext:(id<MealzcoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MealzcoreKotlinCoroutineContextElement <MealzcoreKotlinCoroutineContext>
@required
@property (readonly) id<MealzcoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MealzcoreKotlinAbstractCoroutineContextElement : MealzcoreBase <MealzcoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MealzcoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MealzcoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MealzcoreKotlinContinuationInterceptor <MealzcoreKotlinCoroutineContextElement>
@required
- (id<MealzcoreKotlinContinuation>)interceptContinuationContinuation:(id<MealzcoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MealzcoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MealzcoreKotlinx_coroutines_coreCoroutineDispatcher : MealzcoreKotlinAbstractCoroutineContextElement <MealzcoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MealzcoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MealzcoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MealzcoreKotlinCoroutineContext>)context block:(id<MealzcoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MealzcoreKotlinCoroutineContext>)context block:(id<MealzcoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MealzcoreKotlinContinuation>)interceptContinuationContinuation:(id<MealzcoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MealzcoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MealzcoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MealzcoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MealzcoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MealzcoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainLoopDispatcher")))
@interface MealzcoreMainLoopDispatcher : MealzcoreKotlinx_coroutines_coreCoroutineDispatcher
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)mainLoopDispatcher __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMainLoopDispatcher *shared __attribute__((swift_name("shared")));
- (void)dispatchContext:(id<MealzcoreKotlinCoroutineContext>)context block:(id<MealzcoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end

__attribute__((swift_name("Action")))
@protocol MealzcoreAction
@required
@end

__attribute__((swift_name("BaseViewModel")))
@interface MealzcoreBaseViewModel<Event, State, Effect> : MealzcoreMainExecutor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)addListenerKey:(NSString *)key listener:(id<MealzcoreKotlinx_coroutines_coreJob>)listener __attribute__((swift_name("addListener(key:listener:)")));
- (State)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)handleEventEvent:(Event)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setEffectBuilder:(Effect (^)(void))builder __attribute__((swift_name("setEffect(builder:)")));
- (void)setEventEvent:(Event)event __attribute__((swift_name("setEvent(event:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setStateReduce:(State (^)(State))reduce __attribute__((swift_name("setState(reduce:)")));
@property (readonly) State currentState __attribute__((swift_name("currentState")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreFlow> effect __attribute__((swift_name("effect")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreSharedFlow> event __attribute__((swift_name("event")));
@property (readonly) State initialState __attribute__((swift_name("initialState")));
@property (readonly) MealzcoreMutableDictionary<NSString *, id<MealzcoreKotlinx_coroutines_coreJob>> *listeners __attribute__((swift_name("listeners")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreStateFlow> uiState __attribute__((swift_name("uiState")));
@end

__attribute__((swift_name("BasicUiState")))
@interface MealzcoreBasicUiState<__covariant T> : MealzcoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateEmpty")))
@interface MealzcoreBasicUiStateEmpty : MealzcoreBasicUiState<MealzcoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasicUiStateEmpty *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateError")))
@interface MealzcoreBasicUiStateError : MealzcoreBasicUiState<MealzcoreKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasicUiStateError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateIdle")))
@interface MealzcoreBasicUiStateIdle : MealzcoreBasicUiState<MealzcoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasicUiStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateLoading")))
@interface MealzcoreBasicUiStateLoading : MealzcoreBasicUiState<MealzcoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasicUiStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateSuccess")))
@interface MealzcoreBasicUiStateSuccess<T> : MealzcoreBasicUiState<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasicUiStateSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((swift_name("Effect")))
@protocol MealzcoreEffect
@required
@end

__attribute__((swift_name("State")))
@protocol MealzcoreState
@required
@end

__attribute__((swift_name("Store")))
@protocol MealzcoreStore
@required
- (id<MealzcoreKotlinx_coroutines_coreJob>)dispatchAction:(id<MealzcoreAction>)action __attribute__((swift_name("dispatch(action:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("UiEffect")))
@protocol MealzcoreUiEffect
@required
@end

__attribute__((swift_name("UiEvent")))
@protocol MealzcoreUiEvent
@required
@end

__attribute__((swift_name("UiState")))
@protocol MealzcoreUiState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealzDI")))
@interface MealzcoreMealzDI : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mealzDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzDI *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreAnalytics *analyticsService __attribute__((swift_name("analyticsService")));
@property (readonly) MealzcoreSingletonPreferencesViewModel *preferencesViewModel __attribute__((swift_name("preferencesViewModel")));
@property (readonly) MealzcorePricingRepositoryImp *pricingRepository __attribute__((swift_name("pricingRepository")));
@property (readonly) MealzcoreRecipeRepositoryImp *recipeRepository __attribute__((swift_name("recipeRepository")));
@property (readonly) MealzcoreRouteService *routeService __attribute__((swift_name("routeService")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkRequirement")))
@interface MealzcoreSdkRequirement : MealzcoreBase
- (instancetype)initWithContext:(MealzcoreKMMContext *)context key:(NSString *)key __attribute__((swift_name("init(context:key:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreKMMContext *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSdkRequirement *)doCopyContext:(MealzcoreKMMContext *)context key:(NSString *)key __attribute__((swift_name("doCopy(context:key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreKMMContext *context __attribute__((swift_name("context")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkBuilder")))
@interface MealzcoreSdkBuilder : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkRequirementBuilder")))
@interface MealzcoreSdkRequirementBuilder : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MealzcoreKMMContext * _Nullable context __attribute__((swift_name("context")));
@property NSString * _Nullable key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionConfigBuilder")))
@interface MealzcoreSubscriptionConfigBuilder : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Notifier")))
@protocol MealzcoreNotifier
@required
- (id<MealzcoreKotlinx_coroutines_coreJob>)listenCallBack:(void (^)(id _Nullable))callBack __attribute__((swift_name("listen(callBack:)")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)listenWithDebounceDebounceTime:(int64_t)debounceTime callBack:(void (^)(id _Nullable))callBack __attribute__((swift_name("listenWithDebounce(debounceTime:callBack:)")));
- (void)pushNotification:(id _Nullable)notification __attribute__((swift_name("push(notification:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableSharedFlow> _notificationFlow __attribute__((swift_name("_notificationFlow")));
@end

__attribute__((swift_name("AbstractNotifier")))
@interface MealzcoreAbstractNotifier<T1> : MealzcoreBase <MealzcoreNotifier, MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)listenCallBack:(void (^)(T1 _Nullable))callBack __attribute__((swift_name("listen(callBack:)")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)listenWithDebounceDebounceTime:(int64_t)debounceTime callBack:(void (^)(T1 _Nullable))callBack __attribute__((swift_name("listenWithDebounce(debounceTime:callBack:)")));
- (void)pushNotification:(T1 _Nullable)notification __attribute__((swift_name("push(notification:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableSharedFlow> _notificationFlow __attribute__((swift_name("_notificationFlow")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@end

__attribute__((swift_name("ToasterNotification")))
@interface MealzcoreToasterNotification : MealzcoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToasterNotification.RecipeAdded")))
@interface MealzcoreToasterNotificationRecipeAdded : MealzcoreToasterNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeAdded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreToasterNotificationRecipeAdded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToasterNotification.RecipeLiked")))
@interface MealzcoreToasterNotificationRecipeLiked : MealzcoreToasterNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeLiked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreToasterNotificationRecipeLiked *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToasterNotifier")))
@interface MealzcoreToasterNotifier : MealzcoreAbstractNotifier<MealzcoreToasterNotification *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@end

__attribute__((swift_name("UserNotification")))
@interface MealzcoreUserNotification : MealzcoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNotification.TokenExpired")))
@interface MealzcoreUserNotificationTokenExpired : MealzcoreUserNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tokenExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreUserNotificationTokenExpired *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNotification.UserConnected")))
@interface MealzcoreUserNotificationUserConnected : MealzcoreUserNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userConnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreUserNotificationUserConnected *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNotification.UserDisconnected")))
@interface MealzcoreUserNotificationUserDisconnected : MealzcoreUserNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreUserNotificationUserDisconnected *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNotifier")))
@interface MealzcoreUserNotifier : MealzcoreAbstractNotifier<MealzcoreUserNotification *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@end

__attribute__((swift_name("DynamicRecipeDetailNotification")))
@interface MealzcoreDynamicRecipeDetailNotification : MealzcoreBase
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.ChildReady")))
@interface MealzcoreDynamicRecipeDetailNotificationChildReady : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationChildReady *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.GoToItemSelector")))
@interface MealzcoreDynamicRecipeDetailNotificationGoToItemSelector : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry ingredientId:(NSString *)ingredientId __attribute__((swift_name("init(basketEntry:ingredientId:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationGoToItemSelector *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry ingredientId:(NSString *)ingredientId __attribute__((swift_name("doCopy(basketEntry:ingredientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@property (readonly) NSString *ingredientId __attribute__((swift_name("ingredientId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.ProductAdded")))
@interface MealzcoreDynamicRecipeDetailNotificationProductAdded : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationProductAdded *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.ProductQtyUpdated")))
@interface MealzcoreDynamicRecipeDetailNotificationProductQtyUpdated : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationProductQtyUpdated *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.ProductRemoved")))
@interface MealzcoreDynamicRecipeDetailNotificationProductRemoved : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationProductRemoved *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotification.ProductReplaced")))
@interface MealzcoreDynamicRecipeDetailNotificationProductReplaced : MealzcoreDynamicRecipeDetailNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailNotificationProductReplaced *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailNotifier")))
@interface MealzcoreDynamicRecipeDetailNotifier : MealzcoreAbstractNotifier<MealzcoreDynamicRecipeDetailNotification *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@end

__attribute__((swift_name("BasketNotification")))
@interface MealzcoreBasketNotification : MealzcoreBase
@property (readonly) MealzcoreBasketEntry * _Nullable basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketConfirmed")))
@interface MealzcoreBasketNotificationBasketConfirmed : MealzcoreBasketNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketConfirmed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketNotificationBasketConfirmed *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketInit")))
@interface MealzcoreBasketNotificationBasketInit : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationBasketInit *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketReloaded")))
@interface MealzcoreBasketNotificationBasketReloaded : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationBasketReloaded *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketReset")))
@interface MealzcoreBasketNotificationBasketReset : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationBasketReset *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketUpdated")))
@interface MealzcoreBasketNotificationBasketUpdated : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationBasketUpdated *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.BasketUpdating")))
@interface MealzcoreBasketNotificationBasketUpdating : MealzcoreBasketNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketUpdating __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketNotificationBasketUpdating *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.ComparatorIsReady")))
@interface MealzcoreBasketNotificationComparatorIsReady : MealzcoreBasketNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)comparatorIsReady __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketNotificationComparatorIsReady *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.ComparatorIsReset")))
@interface MealzcoreBasketNotificationComparatorIsReset : MealzcoreBasketNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)comparatorIsReset __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketNotificationComparatorIsReset *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.EntriesAltered")))
@interface MealzcoreBasketNotificationEntriesAltered : MealzcoreBasketNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)entriesAltered __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketNotificationEntriesAltered *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.EntryAdded")))
@interface MealzcoreBasketNotificationEntryAdded : MealzcoreBasketNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationEntryAdded *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.EntryItemReplaced")))
@interface MealzcoreBasketNotificationEntryItemReplaced : MealzcoreBasketNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationEntryItemReplaced *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.EntryQuantityUpdated")))
@interface MealzcoreBasketNotificationEntryQuantityUpdated : MealzcoreBasketNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationEntryQuantityUpdated *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.EntryRemoved")))
@interface MealzcoreBasketNotificationEntryRemoved : MealzcoreBasketNotification
- (instancetype)initWithBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(basketEntry:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationEntryRemoved *)doCopyBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("doCopy(basketEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.RecipeCountChanged")))
@interface MealzcoreBasketNotificationRecipeCountChanged : MealzcoreBasketNotification
- (instancetype)initWithRecipeCount:(int32_t)recipeCount __attribute__((swift_name("init(recipeCount:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationRecipeCountChanged *)doCopyRecipeCount:(int32_t)recipeCount __attribute__((swift_name("doCopy(recipeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t recipeCount __attribute__((swift_name("recipeCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.RecipesAdded")))
@interface MealzcoreBasketNotificationRecipesAdded : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationRecipesAdded *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.RecipesRemoved")))
@interface MealzcoreBasketNotificationRecipesRemoved : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationRecipesRemoved *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketNotification.RecipesUpdated")))
@interface MealzcoreBasketNotificationRecipesUpdated : MealzcoreBasketNotification
- (instancetype)initWithBasket:(MealzcoreBasket *)basket __attribute__((swift_name("init(basket:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketNotificationRecipesUpdated *)doCopyBasket:(MealzcoreBasket *)basket __attribute__((swift_name("doCopy(basket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket *basket __attribute__((swift_name("basket")));
@end

__attribute__((swift_name("MealPlannerBasketPreviewNotification")))
@interface MealzcoreMealPlannerBasketPreviewNotification : MealzcoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerBasketPreviewNotification.RecipeProductMutualizedAsChange")))
@interface MealzcoreMealPlannerBasketPreviewNotificationRecipeProductMutualizedAsChange : MealzcoreMealPlannerBasketPreviewNotification
- (instancetype)initWithRecipeId:(NSString *)recipeId basketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("init(recipeId:basketEntry:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MealzcoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerBasketPreviewNotification.RecipeRowDeleted")))
@interface MealzcoreMealPlannerBasketPreviewNotificationRecipeRowDeleted : MealzcoreMealPlannerBasketPreviewNotification
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerBasketPreviewNotification.RecipeRowLoading")))
@interface MealzcoreMealPlannerBasketPreviewNotificationRecipeRowLoading : MealzcoreMealPlannerBasketPreviewNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeRowLoading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealPlannerBasketPreviewNotificationRecipeRowLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerBasketPreviewNotification.RecipeRowReady")))
@interface MealzcoreMealPlannerBasketPreviewNotificationRecipeRowReady : MealzcoreMealPlannerBasketPreviewNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeRowReady __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealPlannerBasketPreviewNotificationRecipeRowReady *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PreferencesNotification")))
@interface MealzcorePreferencesNotification : MealzcoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesNotification.PreferencesLoaded")))
@interface MealzcorePreferencesNotificationPreferencesLoaded : MealzcorePreferencesNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesLoaded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePreferencesNotificationPreferencesLoaded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesNotification.PreferencesUpdated")))
@interface MealzcorePreferencesNotificationPreferencesUpdated : MealzcorePreferencesNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesUpdated __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePreferencesNotificationPreferencesUpdated *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("LikeEffect")))
@interface MealzcoreLikeEffect : MealzcoreBase <MealzcoreEffect>
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeEffect.Disliked")))
@interface MealzcoreLikeEffectDisliked : MealzcoreLikeEffect
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreLikeEffectDisliked *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeEffect.Liked")))
@interface MealzcoreLikeEffectLiked : MealzcoreLikeEffect
- (instancetype)initWithRecipe:(MealzcoreRecipe *)recipe __attribute__((swift_name("init(recipe:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRecipe *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreLikeEffectLiked *)doCopyRecipe:(MealzcoreRecipe *)recipe __attribute__((swift_name("doCopy(recipe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRecipe *recipe __attribute__((swift_name("recipe")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeStore")))
@interface MealzcoreLikeStore : MealzcoreBase <MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAndGetRecipeLikesRecipeIds:(NSArray<NSString *> *)recipeIds completionHandler:(void (^)(NSArray<MealzcoreRecipeLike *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAndGetRecipeLikes(recipeIds:completionHandler:)")));
- (NSArray<NSString *> *)getCurrentLikedRecipeIds __attribute__((swift_name("getCurrentLikedRecipeIds()")));
- (id<MealzcoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)toggleLikeRecipeId:(NSString *)recipeId completionHandler:(void (^)(MealzcoreRecipeLike * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toggleLike(recipeId:completionHandler:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeStoreInstance")))
@interface MealzcoreLikeStoreInstance : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)likeStoreInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLikeStoreInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreLikeStore *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerState")))
@interface MealzcoreMealPlannerState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithRecipeIds:(NSArray<id> *)recipeIds totalPrice:(double)totalPrice __attribute__((swift_name("init(recipeIds:totalPrice:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerState *)doCopyRecipeIds:(NSArray<id> *)recipeIds totalPrice:(double)totalPrice __attribute__((swift_name("doCopy(recipeIds:totalPrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *recipeIds __attribute__((swift_name("recipeIds")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerStore")))
@interface MealzcoreMealPlannerStore : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("PointOfSaleAction")))
@interface MealzcorePointOfSaleAction : MealzcoreBase <MealzcoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleAction.SetPos")))
@interface MealzcorePointOfSaleActionSetPos : MealzcorePointOfSaleAction
- (instancetype)initWithPosId:(NSString *)posId posExtId:(NSString *)posExtId __attribute__((swift_name("init(posId:posExtId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePointOfSaleActionSetPos *)doCopyPosId:(NSString *)posId posExtId:(NSString *)posExtId __attribute__((swift_name("doCopy(posId:posExtId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *posExtId __attribute__((swift_name("posExtId")));
@property (readonly) NSString *posId __attribute__((swift_name("posId")));
@end

__attribute__((swift_name("PointOfSaleEffect")))
@interface MealzcorePointOfSaleEffect : MealzcoreBase <MealzcoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleState")))
@interface MealzcorePointOfSaleState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithExtIdPointOfSale:(NSString * _Nullable)extIdPointOfSale idPointOfSale:(NSString * _Nullable)idPointOfSale __attribute__((swift_name("init(extIdPointOfSale:idPointOfSale:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePointOfSaleState *)doCopyExtIdPointOfSale:(NSString * _Nullable)extIdPointOfSale idPointOfSale:(NSString * _Nullable)idPointOfSale __attribute__((swift_name("doCopy(extIdPointOfSale:idPointOfSale:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable extIdPointOfSale __attribute__((swift_name("extIdPointOfSale")));
@property (readonly) NSString * _Nullable idPointOfSale __attribute__((swift_name("idPointOfSale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleStore")))
@interface MealzcorePointOfSaleStore : MealzcoreBase <MealzcoreStore, MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)dispatchAction:(MealzcorePointOfSaleAction *)action __attribute__((swift_name("dispatch(action:)")));
- (NSString * _Nullable)getPosId __attribute__((swift_name("getPosId()")));
- (BOOL)samePosExtId:(NSString * _Nullable)extId __attribute__((swift_name("samePos(extId:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("UserAction")))
@interface MealzcoreUserAction : MealzcoreBase <MealzcoreAction>
@end

__attribute__((swift_name("UserEffect")))
@interface MealzcoreUserEffect : MealzcoreBase <MealzcoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserState")))
@interface MealzcoreUserState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithUserId:(NSString * _Nullable)userId sessionId:(NSString * _Nullable)sessionId authorization:(MealzcoreAuthorization *)authorization profilingAllowed:(BOOL)profilingAllowed likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("init(userId:sessionId:authorization:profilingAllowed:likeIsEnable:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAuthorization *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreUserState *)doCopyUserId:(NSString * _Nullable)userId sessionId:(NSString * _Nullable)sessionId authorization:(MealzcoreAuthorization *)authorization profilingAllowed:(BOOL)profilingAllowed likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("doCopy(userId:sessionId:authorization:profilingAllowed:likeIsEnable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreAuthorization *authorization __attribute__((swift_name("authorization")));
@property (readonly) BOOL likeIsEnable __attribute__((swift_name("likeIsEnable")));
@property (readonly) BOOL profilingAllowed __attribute__((swift_name("profilingAllowed")));
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((swift_name("UserStore")))
@protocol MealzcoreUserStore <MealzcoreStore>
@required
- (BOOL)ProfilingForbiden __attribute__((swift_name("ProfilingForbiden()")));
- (int32_t)getAndIncreaseMealPlannerUsesCount __attribute__((swift_name("getAndIncreaseMealPlannerUsesCount()")));
- (BOOL)getEnableLike __attribute__((swift_name("getEnableLike()")));
- (NSString * _Nullable)getSessionId __attribute__((swift_name("getSessionId()")));
- (void)refreshTokenToken:(NSString *)token __attribute__((swift_name("refreshToken(token:)")));
- (void)refreshUserUserId:(NSString * _Nullable)userId authorization:(MealzcoreAuthorization *)authorization __attribute__((swift_name("refreshUser(userId:authorization:)")));
- (BOOL)sameSessionSessionId:(NSString *)sessionId __attribute__((swift_name("sameSession(sessionId:)")));
- (BOOL)sameUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("sameUser(userId:)")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowedAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowed(allowance:)")));
- (void)setSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("setSessionId(sessionId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserStoreImpl")))
@interface MealzcoreUserStoreImpl : MealzcoreBase <MealzcoreUserStore, MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreUserStoreImplCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)ProfilingForbiden __attribute__((swift_name("ProfilingForbiden()")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)dispatchAction:(MealzcoreUserAction *)action __attribute__((swift_name("dispatch(action:)")));
- (int32_t)getAndIncreaseMealPlannerUsesCount __attribute__((swift_name("getAndIncreaseMealPlannerUsesCount()")));
- (BOOL)getEnableLike __attribute__((swift_name("getEnableLike()")));
- (NSString * _Nullable)getSessionId __attribute__((swift_name("getSessionId()")));
- (void)refreshTokenToken:(NSString *)token __attribute__((swift_name("refreshToken(token:)")));
- (void)refreshUserUserId:(NSString * _Nullable)userId authorization:(MealzcoreAuthorization *)authorization __attribute__((swift_name("refreshUser(userId:authorization:)")));
- (BOOL)sameSessionSessionId:(NSString *)sessionId __attribute__((swift_name("sameSession(sessionId:)")));
- (BOOL)sameUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("sameUser(userId:)")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowedAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowed(allowance:)")));
- (void)setSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("setSessionId(sessionId:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserStoreImpl.Companion")))
@interface MealzcoreUserStoreImplCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreUserStoreImplCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailabilityState")))
@interface MealzcoreAvailabilityState : MealzcoreBase
- (instancetype)initWithIsInError:(BOOL)isInError isUserConnected:(BOOL)isUserConnected isBasketComparatorReady:(BOOL)isBasketComparatorReady isPreferencesReady:(BOOL)isPreferencesReady __attribute__((swift_name("init(isInError:isUserConnected:isBasketComparatorReady:isPreferencesReady:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAvailabilityState *)doCopyIsInError:(BOOL)isInError isUserConnected:(BOOL)isUserConnected isBasketComparatorReady:(BOOL)isBasketComparatorReady isPreferencesReady:(BOOL)isPreferencesReady __attribute__((swift_name("doCopy(isInError:isUserConnected:isBasketComparatorReady:isPreferencesReady:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isBasketComparatorReady __attribute__((swift_name("isBasketComparatorReady")));
@property (readonly) BOOL isInError __attribute__((swift_name("isInError")));
@property (readonly) BOOL isPreferencesReady __attribute__((swift_name("isPreferencesReady")));
@property (readonly) BOOL isUserConnected __attribute__((swift_name("isUserConnected")));
@end

__attribute__((swift_name("BasketAction")))
@interface MealzcoreBasketAction : MealzcoreBase <MealzcoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.RefreshBasket")))
@interface MealzcoreBasketActionRefreshBasket : MealzcoreBasketAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refreshBasket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketActionRefreshBasket *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.ResetBasket")))
@interface MealzcoreBasketActionResetBasket : MealzcoreBasketAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resetBasket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketActionResetBasket *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketState")))
@interface MealzcoreBasketState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithBasket:(MealzcoreBasket * _Nullable)basket isLoading:(BOOL)isLoading __attribute__((swift_name("init(basket:isLoading:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasket * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketState *)doCopyBasket:(MealzcoreBasket * _Nullable)basket isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(basket:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasket * _Nullable basket __attribute__((swift_name("basket")));
@property BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) int32_t recipeCount __attribute__((swift_name("recipeCount")));
@end

__attribute__((swift_name("BasketStore")))
@protocol MealzcoreBasketStore <MealzcoreStore>
@required
- (void)addEmptyRecipeToBasketRecipeId:(NSString *)recipeId basket:(MealzcoreBasket *)basket __attribute__((swift_name("addEmptyRecipeToBasket(recipeId:basket:)")));
- (BOOL)basketIsEmpty __attribute__((swift_name("basketIsEmpty()")));
- (int32_t)basketRecipesCount __attribute__((swift_name("basketRecipesCount()")));
- (void)checkBasketLoading __attribute__((swift_name("checkBasketLoading()")));
- (MealzcoreBasket * _Nullable)getBasket __attribute__((swift_name("getBasket()")));
- (int32_t)guestsForRecipeRecipeId:(NSString * _Nullable)recipeId __attribute__((swift_name("guestsForRecipe(recipeId:)")));
- (void)pushActionAction:(MealzcoreBasketAction *)action __attribute__((swift_name("pushAction(action:)")));
- (BOOL)recipeIsInBasketRecipeId:(NSString *)recipeId __attribute__((swift_name("recipeIsInBasket(recipeId:)")));
- (void)setBasketBasket:(MealzcoreBasket *)basket __attribute__((swift_name("setBasket(basket:)")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparator")))
@interface MealzcoreBasketComparator : MealzcoreBase
- (instancetype)initWithExtIdToComparisonItem:(NSDictionary<NSString *, MealzcoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("init(extIdToComparisonItem:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, MealzcoreBasketComparisonItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketComparator *)doCopyExtIdToComparisonItem:(NSDictionary<NSString *, MealzcoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("doCopy(extIdToComparisonItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MealzcoreBasketComparator *)doInitSupplierBasket:(NSArray<MealzcoreSupplierProduct *> *)supplierBasket sdkActiveBasket:(NSArray<MealzcoreBasketEntry *> *)sdkActiveBasket __attribute__((swift_name("doInit(supplierBasket:sdkActiveBasket:)")));
- (NSMutableArray<MealzcoreSupplierProduct *> *)resolveFromSDKNewBasketComparator:(MealzcoreBasketComparator *)newBasketComparator __attribute__((swift_name("resolveFromSDK(newBasketComparator:)")));
- (NSArray<MealzcoreAlterQuantityBasketEntry *> *)resolveFromSupplierNewComparator:(MealzcoreBasketComparator *)newComparator __attribute__((swift_name("resolveFromSupplier(newComparator:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreBasketComparator *)updateReceivedFromSDKSdkActiveBasket:(NSArray<MealzcoreBasketEntry *> *)sdkActiveBasket __attribute__((swift_name("updateReceivedFromSDK(sdkActiveBasket:)")));
- (MealzcoreBasketComparator *)updateReceivedFromSupplierSupplierBasket:(NSArray<MealzcoreSupplierProduct *> *)supplierBasket __attribute__((swift_name("updateReceivedFromSupplier(supplierBasket:)")));
@property (readonly) NSDictionary<NSString *, MealzcoreBasketComparisonItem *> *extIdToComparisonItem __attribute__((swift_name("extIdToComparisonItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparatorData")))
@interface MealzcoreBasketComparatorData : MealzcoreBase
- (instancetype)initWithExtIdToComparisonItem:(MealzcoreMutableDictionary<NSString *, MealzcoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("init(extIdToComparisonItem:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreMutableDictionary<NSString *, MealzcoreBasketComparisonItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketComparatorData *)doCopyExtIdToComparisonItem:(MealzcoreMutableDictionary<NSString *, MealzcoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("doCopy(extIdToComparisonItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitSupplierBasket:(NSArray<MealzcoreSupplierProduct *> *)supplierBasket sDKActiveBasket:(NSArray<MealzcoreBasketEntry *> *)sDKActiveBasket __attribute__((swift_name("doInit(supplierBasket:sDKActiveBasket:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)updateMapFromSdkSdkActiveBasket:(NSArray<MealzcoreBasketEntry *> *)sdkActiveBasket __attribute__((swift_name("updateMapFromSdk(sdkActiveBasket:)")));
- (void)updateMapFromSupplierSupplierBasket:(NSArray<MealzcoreSupplierProduct *> *)supplierBasket __attribute__((swift_name("updateMapFromSupplier(supplierBasket:)")));
@property (readonly) MealzcoreMutableDictionary<NSString *, MealzcoreBasketComparisonItem *> *extIdToComparisonItem __attribute__((swift_name("extIdToComparisonItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparisonItem")))
@interface MealzcoreBasketComparisonItem : MealzcoreBase
- (instancetype)initWithSupplierId:(NSString *)supplierId productName:(NSString * _Nullable)productName imageURL:(NSString * _Nullable)imageURL sdkBasketEntryIds:(NSDictionary<NSString *, MealzcoreInt *> *)sdkBasketEntryIds supplierProduct:(MealzcoreSupplierProduct *)supplierProduct __attribute__((swift_name("init(supplierId:productName:imageURL:sdkBasketEntryIds:supplierProduct:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketComparisonItem *)addMiamEntryBasketEntry:(MealzcoreBasketEntry *)basketEntry __attribute__((swift_name("addMiamEntry(basketEntry:)")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, MealzcoreInt *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierProduct *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketComparisonItem *)doCopySupplierId:(NSString *)supplierId productName:(NSString * _Nullable)productName imageURL:(NSString * _Nullable)imageURL sdkBasketEntryIds:(NSDictionary<NSString *, MealzcoreInt *> *)sdkBasketEntryIds supplierProduct:(MealzcoreSupplierProduct *)supplierProduct __attribute__((swift_name("doCopy(supplierId:productName:imageURL:sdkBasketEntryIds:supplierProduct:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<MealzcoreAlterQuantityBasketEntry *> *)miamProductRemoved __attribute__((swift_name("miamProductRemoved()")));
- (MealzcoreSupplierProduct * _Nullable)retailerProductAddedOrUpdatedFromMiamPreviousCompItem:(MealzcoreBasketComparisonItem * _Nullable)previousCompItem __attribute__((swift_name("retailerProductAddedOrUpdatedFromMiam(previousCompItem:)")));
- (MealzcoreSupplierProduct * _Nullable)retailerProductsRemovedFromMiamNewCompItem:(MealzcoreBasketComparisonItem * _Nullable)newCompItem __attribute__((swift_name("retailerProductsRemovedFromMiam(newCompItem:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *firstBasketEntryId __attribute__((swift_name("firstBasketEntryId")));
@property (readonly) NSString * _Nullable imageURL __attribute__((swift_name("imageURL")));
@property (readonly) int32_t miamQuantity __attribute__((swift_name("miamQuantity")));
@property (readonly) NSString * _Nullable productName __attribute__((swift_name("productName")));
@property (readonly) int32_t retailerQuantity __attribute__((swift_name("retailerQuantity")));
@property (readonly) NSDictionary<NSString *, MealzcoreInt *> *sdkBasketEntryIds __attribute__((swift_name("sdkBasketEntryIds")));
@property (readonly) NSString *supplierId __attribute__((swift_name("supplierId")));
@property (readonly) MealzcoreSupplierProduct *supplierProduct __attribute__((swift_name("supplierProduct")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client")))
@interface MealzcoreClient : MealzcoreBase
- (instancetype)initWithUserStore:(id<MealzcoreUserStore>)userStore pointOfSaleStore:(MealzcorePointOfSaleStore *)pointOfSaleStore __attribute__((swift_name("init(userStore:pointOfSaleStore:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("PricingDataSource")))
@protocol MealzcorePricingDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceIdRecipe:(NSString *)idRecipe idPos:(NSString *)idPos serves:(MealzcoreInt * _Nullable)serves completionHandler:(void (^)(MealzcorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(idRecipe:idPos:serves:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingDataSourceImp")))
@interface MealzcorePricingDataSourceImp : MealzcoreBase <MealzcorePricingDataSource>
- (instancetype)initWithClient:(MealzcoreClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePricingDataSourceImpCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceIdRecipe:(NSString *)idRecipe idPos:(NSString *)idPos serves:(MealzcoreInt * _Nullable)serves completionHandler:(void (^)(MealzcorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(idRecipe:idPos:serves:completionHandler:)")));
@property (readonly) MealzcoreClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingDataSourceImp.Companion")))
@interface MealzcorePricingDataSourceImpCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePricingDataSourceImpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("RecipeDataSource")))
@protocol MealzcoreRecipeDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdId:(NSString *)id included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(id:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdsRecipesIds:(NSArray<NSString *> *)recipesIds included:(NSArray<NSString *> * _Nullable)included pageSize:(int32_t)pageSize completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIds(recipesIds:included:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdsChunkRecipesIds:(NSArray<NSString *> *)recipesIds included:(NSArray<NSString *> * _Nullable)included pageSize:(int32_t)pageSize completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIdsChunk(recipesIds:included:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount mealcount:(int32_t)mealcount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeForBudgetConstraint(pointOfSale:budget:guestCount:mealcount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId priceBook:(NSString *)priceBook serves:(int32_t)serves completionHandler:(void (^)(MealzcoreRecipePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:priceBook:serves:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId size:(MealzcoreInt * _Nullable)size criteria:(MealzcoreSuggestionsCriteria *)criteria included:(NSArray<NSString *> *)included pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:size:criteria:included:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MealzcoreRecipeSort *)sort completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipes(filters:included:pageSize:pageNumber:sort:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesWithPOSFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MealzcoreRecipeSort *)sort pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount primordialOnly:(BOOL)primordialOnly completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesWithPOS(filters:included:pageSize:pageNumber:sort:pointOfSale:guestCount:primordialOnly:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeFilter")))
@interface MealzcoreRecipeFilter : MealzcoreKotlinEnum<MealzcoreRecipeFilter *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreRecipeFilter *packages __attribute__((swift_name("packages")));
@property (class, readonly) MealzcoreRecipeFilter *difficulty __attribute__((swift_name("difficulty")));
@property (class, readonly) MealzcoreRecipeFilter *cost __attribute__((swift_name("cost")));
@property (class, readonly) MealzcoreRecipeFilter *totalTime __attribute__((swift_name("totalTime")));
@property (class, readonly) MealzcoreRecipeFilter *search __attribute__((swift_name("search")));
@property (class, readonly) MealzcoreRecipeFilter *liked __attribute__((swift_name("liked")));
@property (class, readonly) MealzcoreRecipeFilter *active __attribute__((swift_name("active")));
@property (class, readonly) MealzcoreRecipeFilter *includeTags __attribute__((swift_name("includeTags")));
@property (class, readonly) MealzcoreRecipeFilter *excludeTags __attribute__((swift_name("excludeTags")));
+ (MealzcoreKotlinArray<MealzcoreRecipeFilter *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *filterName __attribute__((swift_name("filterName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BudgetRepository")))
@interface MealzcoreBudgetRepository : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreBudgetRepositoryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BudgetRepository.Companion")))
@interface MealzcoreBudgetRepositoryCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBudgetRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property double availableBudget __attribute__((swift_name("availableBudget")));
@property int32_t budget __attribute__((swift_name("budget")));
@property int32_t guestCount __attribute__((swift_name("guestCount")));
@property int32_t mealCount __attribute__((swift_name("mealCount")));
@end

__attribute__((swift_name("SponsorBlockRepository")))
@protocol MealzcoreSponsorBlockRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSponsorBlocksBySponsorIdSponsorId:(NSString *)sponsorId completionHandler:(void (^)(NSArray<MealzcoreSponsorBlock *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSponsorBlocksBySponsorId(sponsorId:completionHandler:)")));
@end

__attribute__((swift_name("GuestByRecipeRepository")))
@protocol MealzcoreGuestByRecipeRepository
@required
- (void)clear __attribute__((swift_name("clear()")));
- (MealzcoreInt * _Nullable)getGuestForRecipeOrNullRecipeId:(NSString *)recipeId __attribute__((swift_name("getGuestForRecipeOrNull(recipeId:)")));
- (void)setGuestFroRecipeRecipeId:(NSString *)recipeId guestCount:(int32_t)guestCount __attribute__((swift_name("setGuestFroRecipe(recipeId:guestCount:)")));
@end

__attribute__((swift_name("RecipeRepository")))
@protocol MealzcoreRecipeRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdRecipeId:(NSString *)recipeId included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(recipeId:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdWithRelationsRecipeId:(NSString *)recipeId completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIdWithRelations(recipeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId priceBook:(NSString *)priceBook serves:(int32_t)serves completionHandler:(void (^)(MealzcoreRecipePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:priceBook:serves:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionSupplierId:(NSString *)supplierId criteria:(MealzcoreSuggestionsCriteria *)criteria pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestion(supplierId:criteria:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId criteria:(MealzcoreSuggestionsCriteria *)criteria size:(int32_t)size pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:criteria:size:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesByIdsRecipeIds:(NSArray<NSString *> *)recipeIds included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesByIds(recipeIds:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(pointOfSale:budget:mealCount:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRepositoryImp")))
@interface MealzcoreRecipeRepositoryImp : MealzcoreBase <MealzcoreRecipeRepository>
- (instancetype)initWithRecipeDataSource:(id<MealzcoreRecipeDataSource>)recipeDataSource __attribute__((swift_name("init(recipeDataSource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeRepositoryImpCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdRecipeId:(NSString *)recipeId included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(recipeId:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdWithRelationsRecipeId:(NSString *)recipeId completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIdWithRelations(recipeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId priceBook:(NSString *)priceBook serves:(int32_t)serves completionHandler:(void (^)(MealzcoreRecipePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:priceBook:serves:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionSupplierId:(NSString *)supplierId criteria:(MealzcoreSuggestionsCriteria *)criteria pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestion(supplierId:criteria:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId criteria:(MealzcoreSuggestionsCriteria *)criteria size:(int32_t)size pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:criteria:size:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MealzcoreRecipeSort *)sort completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipes(filters:included:pageSize:pageNumber:sort:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesByIdsRecipeIds:(NSArray<NSString *> *)recipeIds included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesByIds(recipeIds:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(pointOfSale:budget:mealCount:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MealzcoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesWithPOSFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MealzcoreRecipeSort *)sort pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount primordialOnly:(BOOL)primordialOnly completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesWithPOS(filters:included:pageSize:pageNumber:sort:pointOfSale:guestCount:primordialOnly:completionHandler:)")));
@property (readonly) id<MealzcoreRecipeDataSource> recipeDataSource __attribute__((swift_name("recipeDataSource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRepositoryImp.Companion")))
@interface MealzcoreRecipeRepositoryImpCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeRepositoryImpCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_PAGE_SIZE __attribute__((swift_name("DEFAULT_PAGE_SIZE")));
@property (readonly) int32_t FIRST_PAGE __attribute__((swift_name("FIRST_PAGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeSort")))
@interface MealzcoreRecipeSort : MealzcoreKotlinEnum<MealzcoreRecipeSort *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreRecipeSort *noSort __attribute__((swift_name("noSort")));
@property (class, readonly) MealzcoreRecipeSort *byPositionInPackage __attribute__((swift_name("byPositionInPackage")));
@property (class, readonly) MealzcoreRecipeSort *byComputedPrice __attribute__((swift_name("byComputedPrice")));
@property (class, readonly) MealzcoreRecipeSort *byPrice __attribute__((swift_name("byPrice")));
+ (MealzcoreKotlinArray<MealzcoreRecipeSort *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *sortName __attribute__((swift_name("sortName")));
@end

__attribute__((swift_name("SupplierRepository")))
@protocol MealzcoreSupplierRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSupplierSupplierId:(NSString *)supplierId completionHandler:(void (^)(MealzcoreSupplier * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSupplier(supplierId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyConfirmBasketBasketToken:(NSString *)basketToken completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyConfirmBasket(basketToken:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyPaidBasketBasketToken:(NSString *)basketToken price:(NSString *)price completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyPaidBasket(basketToken:price:completionHandler:)")));
@end

__attribute__((swift_name("BasketEntryRepository")))
@protocol MealzcoreBasketEntryRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addProductToBasketBasketId:(NSString *)basketId basketEntry:(MealzcoreBasketEntry *)basketEntry ingredient:(MealzcoreIngredient *)ingredient guests:(int32_t)guests completionHandler:(void (^)(MealzcoreBasketEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addProductToBasket(basketId:basketEntry:ingredient:guests:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBasketEntryForIngredientBasketId:(NSString *)basketId ingredientId:(NSString *)ingredientId guests:(int32_t)guests completionHandler:(void (^)(MealzcoreBasketEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBasketEntryForIngredient(basketId:ingredientId:guests:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeProductFromBasketBasketId:(NSString *)basketId basketEntry:(MealzcoreBasketEntry *)basketEntry ingredient:(MealzcoreIngredient *)ingredient guests:(int32_t)guests completionHandler:(void (^)(MealzcoreBasketEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeProductFromBasket(basketId:basketEntry:ingredient:guests:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateBasketEntryBasketEntry:(MealzcoreBasketEntry *)basketEntry completionHandler:(void (^)(MealzcoreBasketEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateBasketEntry(basketEntry:completionHandler:)")));
@end

__attribute__((swift_name("PricingRepository")))
@protocol MealzcorePricingRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId serves:(MealzcoreInt * _Nullable)serves completionHandler:(void (^)(MealzcorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:serves:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingRepositoryImp")))
@interface MealzcorePricingRepositoryImp : MealzcoreBase <MealzcorePricingRepository>
- (instancetype)initWithPriceDataSource:(id<MealzcorePricingDataSource>)priceDataSource __attribute__((swift_name("init(priceDataSource:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId serves:(MealzcoreInt * _Nullable)serves completionHandler:(void (^)(MealzcorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:serves:completionHandler:)")));
@property (readonly) id<MealzcorePricingDataSource> priceDataSource __attribute__((swift_name("priceDataSource")));
@end

__attribute__((swift_name("BasketRepository")))
@protocol MealzcoreBasketRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addRecipesToBasketBasketId:(NSString *)basketId recipeInfos:(NSArray<MealzcoreRecipeInfos *> *)recipeInfos withoutIngredients:(BOOL)withoutIngredients completionHandler:(void (^)(MealzcoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addRecipesToBasket(basketId:recipeInfos:withoutIngredients:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentBasketFromPosPosId:(NSString *)posId completionHandler:(void (^)(MealzcoreBasket * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentBasketFromPos(posId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeRecipesFromBasketBasketId:(NSString *)basketId recipeIds:(NSArray<NSString *> *)recipeIds completionHandler:(void (^)(MealzcoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeRecipesFromBasket(basketId:recipeIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetBasketPosId:(NSString *)posId completionHandler:(void (^)(MealzcoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetBasket(posId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateBasketBasket:(MealzcoreBasket *)basket completionHandler:(void (^)(MealzcoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateBasket(basket:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRecipesInBasketBasketId:(NSString *)basketId recipeInfos:(NSArray<MealzcoreRecipeInfos *> *)recipeInfos completionHandler:(void (^)(MealzcoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateRecipesInBasket(basketId:recipeInfos:completionHandler:)")));
@end

__attribute__((swift_name("BasketPublisher")))
@protocol MealzcoreBasketPublisher
@required
- (void)onBasketUpdateSendUpdateToSDK:(void (^)(NSArray<MealzcoreSupplierProduct *> *))sendUpdateToSDK __attribute__((swift_name("onBasketUpdate(sendUpdateToSDK:)")));
@property NSArray<MealzcoreSupplierProduct *> *initialValue __attribute__((swift_name("initialValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketSubscriptionBuilder")))
@interface MealzcoreBasketSubscriptionBuilder : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)registerPublisher:(id<MealzcoreBasketPublisher>)publisher __attribute__((swift_name("register(publisher:)")));
- (void)subscribeSubscriber:(id<MealzcoreBasketSubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end

__attribute__((swift_name("BasketSubscriber")))
@protocol MealzcoreBasketSubscriber
@required
- (void)receiveEvent:(NSArray<MealzcoreSupplierProduct *> *)event __attribute__((swift_name("receive(event:)")));
@end

__attribute__((swift_name("PlatformResourceTest")))
@interface MealzcorePlatformResourceTest : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("LikeButtonViewModel")))
@interface MealzcoreLikeButtonViewModel : MealzcoreBaseViewModel<MealzcoreRecipeLikeContractEvent *, MealzcoreRecipeLikeContractState *, MealzcoreRecipeLikeContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreRecipeLikeContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreRecipeLikeContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)setRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("setRecipe(recipeId:)")));
- (void)toggleLike __attribute__((swift_name("toggleLike()")));
@end

__attribute__((swift_name("FactoryViewModel")))
@interface MealzcoreFactoryViewModel<T> : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)abolishInstanceKey:(NSString *)key __attribute__((swift_name("abolishInstance(key:)")));
- (T _Nullable)instantiateKey:(NSString *)key __attribute__((swift_name("instantiate(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeButtonViewModelFactory")))
@interface MealzcoreLikeButtonViewModelFactory : MealzcoreFactoryViewModel<MealzcoreLikeButtonViewModel *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreLikeButtonViewModelFactoryCompanion *companion __attribute__((swift_name("companion")));
- (void)abolishInstanceKey:(NSString *)key __attribute__((swift_name("abolishInstance(key:)")));
- (MealzcoreLikeButtonViewModel *)instantiateKey:(NSString *)key __attribute__((swift_name("instantiate(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeButtonViewModelFactory.Companion")))
@interface MealzcoreLikeButtonViewModelFactoryCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLikeButtonViewModelFactoryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("RecipeLikeContract")))
@protocol MealzcoreRecipeLikeContract
@required
@end

__attribute__((swift_name("RecipeLikeContractEffect")))
@interface MealzcoreRecipeLikeContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("RecipeLikeContractEvent")))
@interface MealzcoreRecipeLikeContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeContractState")))
@interface MealzcoreRecipeLikeContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipeId:(NSString * _Nullable)recipeId isLiked:(MealzcoreBasicUiState<MealzcoreBoolean *> *)isLiked __attribute__((swift_name("init(recipeId:isLiked:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasicUiState<MealzcoreBoolean *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLikeContractState *)doCopyRecipeId:(NSString * _Nullable)recipeId isLiked:(MealzcoreBasicUiState<MealzcoreBoolean *> *)isLiked __attribute__((swift_name("doCopy(recipeId:isLiked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<MealzcoreBoolean *> *isLiked __attribute__((swift_name("isLiked")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((swift_name("PricingContract")))
@protocol MealzcorePricingContract
@required
@end

__attribute__((swift_name("PricingContractEffect")))
@interface MealzcorePricingContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("PricingContractEvent")))
@interface MealzcorePricingContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingContractState")))
@interface MealzcorePricingContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithPrice:(MealzcoreBasicUiState<MealzcorePricing *> *)price recipeId:(NSString * _Nullable)recipeId guestNumber:(MealzcoreInt * _Nullable)guestNumber __attribute__((swift_name("init(price:recipeId:guestNumber:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<MealzcorePricing *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePricingContractState *)doCopyPrice:(MealzcoreBasicUiState<MealzcorePricing *> *)price recipeId:(NSString * _Nullable)recipeId guestNumber:(MealzcoreInt * _Nullable)guestNumber __attribute__((swift_name("doCopy(price:recipeId:guestNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreInt * _Nullable guestNumber __attribute__((swift_name("guestNumber")));
@property (readonly) MealzcoreBasicUiState<MealzcorePricing *> *price __attribute__((swift_name("price")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((swift_name("RecipePricingViewModel")))
@interface MealzcoreRecipePricingViewModel : MealzcoreBaseViewModel<MealzcorePricingContractEvent *, MealzcorePricingContractState *, MealzcorePricingContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcorePricingContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcorePricingContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)listenBasketChanges __attribute__((swift_name("listenBasketChanges()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)setRecipeRecipeId:(NSString *)recipeId guestNumber:(int32_t)guestNumber __attribute__((swift_name("setRecipe(recipeId:guestNumber:)")));
- (void)setRecipeForMealPlannerRecipeId:(NSString *)recipeId __attribute__((swift_name("setRecipeForMealPlanner(recipeId:)")));
@end

__attribute__((swift_name("BasketTagContract")))
@protocol MealzcoreBasketTagContract
@required
@end

__attribute__((swift_name("BasketTagContractEffect")))
@interface MealzcoreBasketTagContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("BasketTagContractEvent")))
@interface MealzcoreBasketTagContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketTagContractEvent.SetRetailerProductId")))
@interface MealzcoreBasketTagContractEventSetRetailerProductId : MealzcoreBasketTagContractEvent
- (instancetype)initWithProductId:(NSString *)productId __attribute__((swift_name("init(productId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketTagContractEventSetRetailerProductId *)doCopyProductId:(NSString *)productId __attribute__((swift_name("doCopy(productId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketTagContractState")))
@interface MealzcoreBasketTagContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipeList:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipeList __attribute__((swift_name("init(recipeList:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketTagContractState *)doCopyRecipeList:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipeList __attribute__((swift_name("doCopy(recipeList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *recipeList __attribute__((swift_name("recipeList")));
@end

__attribute__((swift_name("BasketTagViewModel")))
@interface MealzcoreBasketTagViewModel : MealzcoreBaseViewModel<MealzcoreBasketTagContractEvent *, MealzcoreBasketTagContractState *, MealzcoreBasketTagContractEffect *>
- (instancetype)initWithVmRouter:(MealzcoreRouterOutletViewModel *)vmRouter __attribute__((swift_name("init(vmRouter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MealzcoreBasketTagContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)goToDetailRecipe:(MealzcoreRecipe *)recipe __attribute__((swift_name("goToDetail(recipe:)")));
- (void)handleEventEvent:(MealzcoreBasketTagContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("PreferencesSearchContract")))
@protocol MealzcorePreferencesSearchContract
@required
@end

__attribute__((swift_name("PreferencesSearchContractEffect")))
@interface MealzcorePreferencesSearchContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("PreferencesSearchContractEvent")))
@interface MealzcorePreferencesSearchContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesSearchContractState")))
@interface MealzcorePreferencesSearchContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithSearchProposal:(MealzcoreBasicUiState<NSArray<MealzcoreTag *> *> *)searchProposal __attribute__((swift_name("init(searchProposal:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreTag *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePreferencesSearchContractState *)doCopySearchProposal:(MealzcoreBasicUiState<NSArray<MealzcoreTag *> *> *)searchProposal __attribute__((swift_name("doCopy(searchProposal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreTag *> *> *searchProposal __attribute__((swift_name("searchProposal")));
@end

__attribute__((swift_name("PreferencesSearchViewModel")))
@interface MealzcorePreferencesSearchViewModel : MealzcoreBaseViewModel<MealzcorePreferencesSearchContractEvent *, MealzcorePreferencesSearchContractState *, MealzcorePreferencesSearchContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcorePreferencesSearchContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcorePreferencesSearchContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)resetState __attribute__((swift_name("resetState()")));
- (void)searchSearch:(NSString *)search __attribute__((swift_name("search(search:)")));
@end

__attribute__((swift_name("RecipeContract")))
@protocol MealzcoreRecipeContract
@required
@end

__attribute__((swift_name("RecipeContractEffect")))
@interface MealzcoreRecipeContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEffect.Disliked")))
@interface MealzcoreRecipeContractEffectDisliked : MealzcoreRecipeContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disliked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeContractEffectDisliked *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEffect.HideCard")))
@interface MealzcoreRecipeContractEffectHideCard : MealzcoreRecipeContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hideCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeContractEffectHideCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("RecipeContractEvent")))
@interface MealzcoreRecipeContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.Error")))
@interface MealzcoreRecipeContractEventError : MealzcoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeContractEventError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.FetchRecipeFromCriteria")))
@interface MealzcoreRecipeContractEventFetchRecipeFromCriteria : MealzcoreRecipeContractEvent
- (instancetype)initWithCriteria:(MealzcoreSuggestionsCriteria *)criteria __attribute__((swift_name("init(criteria:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreSuggestionsCriteria *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeContractEventFetchRecipeFromCriteria *)doCopyCriteria:(MealzcoreSuggestionsCriteria *)criteria __attribute__((swift_name("doCopy(criteria:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSuggestionsCriteria *criteria __attribute__((swift_name("criteria")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.FetchRecipeFromId")))
@interface MealzcoreRecipeContractEventFetchRecipeFromId : MealzcoreRecipeContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeContractEventFetchRecipeFromId *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.GoToDetail")))
@interface MealzcoreRecipeContractEventGoToDetail : MealzcoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToDetail __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeContractEventGoToDetail *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractState")))
@interface MealzcoreRecipeContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipeState:(MealzcoreBasicUiState<MealzcoreRecipe *> *)recipeState recipe:(MealzcoreRecipe * _Nullable)recipe headerText:(NSString *)headerText isInCart:(BOOL)isInCart likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("init(recipeState:recipe:headerText:isInCart:likeIsEnable:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<MealzcoreRecipe *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipe * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeContractState *)doCopyRecipeState:(MealzcoreBasicUiState<MealzcoreRecipe *> *)recipeState recipe:(MealzcoreRecipe * _Nullable)recipe headerText:(NSString *)headerText isInCart:(BOOL)isInCart likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("doCopy(recipeState:recipe:headerText:isInCart:likeIsEnable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MealzcoreRecipeContractState *)refreshFromGlBasketStore:(id<MealzcoreBasketStore>)basketStore __attribute__((swift_name("refreshFromGl(basketStore:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *headerText __attribute__((swift_name("headerText")));
@property (readonly) BOOL isInCart __attribute__((swift_name("isInCart")));
@property (readonly) BOOL likeIsEnable __attribute__((swift_name("likeIsEnable")));
@property (readonly) MealzcoreRecipe * _Nullable recipe __attribute__((swift_name("recipe")));
@property (readonly) MealzcoreBasicUiState<MealzcoreRecipe *> *recipeState __attribute__((swift_name("recipeState")));
@end

__attribute__((swift_name("RecipeViewModel")))
@interface MealzcoreRecipeViewModel : MealzcoreBaseViewModel<MealzcoreRecipeContractEvent *, MealzcoreRecipeContractState *, MealzcoreRecipeContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreRecipeContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreRecipeContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)sendAnalyticsImpression __attribute__((swift_name("sendAnalyticsImpression()")));
@property void (^goToDetail)(NSString *) __attribute__((swift_name("goToDetail")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> guestsInBasket __attribute__((swift_name("guestsInBasket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterContent")))
@interface MealzcoreRouterContent : MealzcoreKotlinEnum<MealzcoreRouterContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreRouterContent *recipeDetail __attribute__((swift_name("recipeDetail")));
@property (class, readonly) MealzcoreRouterContent *recipeHelper __attribute__((swift_name("recipeHelper")));
@property (class, readonly) MealzcoreRouterContent *recipeSponsor __attribute__((swift_name("recipeSponsor")));
@property (class, readonly) MealzcoreRouterContent *basketPreview __attribute__((swift_name("basketPreview")));
@property (class, readonly) MealzcoreRouterContent *itemsSelector __attribute__((swift_name("itemsSelector")));
@property (class, readonly) MealzcoreRouterContent *empty __attribute__((swift_name("empty")));
+ (MealzcoreKotlinArray<MealzcoreRouterContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("RouterOutletContract")))
@protocol MealzcoreRouterOutletContract
@required
@end

__attribute__((swift_name("RouterOutletContractEffect")))
@interface MealzcoreRouterOutletContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("RouterOutletContractEvent")))
@interface MealzcoreRouterOutletContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToDetail")))
@interface MealzcoreRouterOutletContractEventGoToDetail : MealzcoreRouterOutletContractEvent
- (instancetype)initWithVm:(MealzcoreRecipeViewModel *)vm withFooter:(BOOL)withFooter showGuestCounter:(BOOL)showGuestCounter __attribute__((swift_name("init(vm:withFooter:showGuestCounter:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRecipeViewModel *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouterOutletContractEventGoToDetail *)doCopyVm:(MealzcoreRecipeViewModel *)vm withFooter:(BOOL)withFooter showGuestCounter:(BOOL)showGuestCounter __attribute__((swift_name("doCopy(vm:withFooter:showGuestCounter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL showGuestCounter __attribute__((swift_name("showGuestCounter")));
@property (readonly) MealzcoreRecipeViewModel *vm __attribute__((swift_name("vm")));
@property (readonly) BOOL withFooter __attribute__((swift_name("withFooter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToHelper")))
@interface MealzcoreRouterOutletContractEventGoToHelper : MealzcoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRouterOutletContractEventGoToHelper *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToItemSelector")))
@interface MealzcoreRouterOutletContractEventGoToItemSelector : MealzcoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToItemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRouterOutletContractEventGoToItemSelector *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToPreview")))
@interface MealzcoreRouterOutletContractEventGoToPreview : MealzcoreRouterOutletContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId vm:(MealzcoreRecipeViewModel *)vm __attribute__((swift_name("init(recipeId:vm:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeViewModel *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouterOutletContractEventGoToPreview *)doCopyRecipeId:(NSString *)recipeId vm:(MealzcoreRecipeViewModel *)vm __attribute__((swift_name("doCopy(recipeId:vm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MealzcoreRecipeViewModel *vm __attribute__((swift_name("vm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToSponsor")))
@interface MealzcoreRouterOutletContractEventGoToSponsor : MealzcoreRouterOutletContractEvent
- (instancetype)initWithSponsor:(MealzcoreSponsor *)sponsor __attribute__((swift_name("init(sponsor:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreSponsor *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouterOutletContractEventGoToSponsor *)doCopySponsor:(MealzcoreSponsor *)sponsor __attribute__((swift_name("doCopy(sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsor *sponsor __attribute__((swift_name("sponsor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.OpenDialog")))
@interface MealzcoreRouterOutletContractEventOpenDialog : MealzcoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openDialog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRouterOutletContractEventOpenDialog *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.Previous")))
@interface MealzcoreRouterOutletContractEventPrevious : MealzcoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)previous __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRouterOutletContractEventPrevious *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractState")))
@interface MealzcoreRouterOutletContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithContent:(MealzcoreRouterContent *)content rvm:(MealzcoreRecipeViewModel * _Nullable)rvm recipeId:(NSString * _Nullable)recipeId sponsor:(MealzcoreSponsor * _Nullable)sponsor isOpen:(BOOL)isOpen showFooter:(BOOL)showFooter showGuestCounter:(BOOL)showGuestCounter __attribute__((swift_name("init(content:rvm:recipeId:sponsor:isOpen:showFooter:showGuestCounter:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRouterContent *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeViewModel * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsor * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouterOutletContractState *)doCopyContent:(MealzcoreRouterContent *)content rvm:(MealzcoreRecipeViewModel * _Nullable)rvm recipeId:(NSString * _Nullable)recipeId sponsor:(MealzcoreSponsor * _Nullable)sponsor isOpen:(BOOL)isOpen showFooter:(BOOL)showFooter showGuestCounter:(BOOL)showGuestCounter __attribute__((swift_name("doCopy(content:rvm:recipeId:sponsor:isOpen:showFooter:showGuestCounter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRouterContent *content __attribute__((swift_name("content")));
@property (readonly) BOOL isOpen __attribute__((swift_name("isOpen")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MealzcoreRecipeViewModel * _Nullable rvm __attribute__((swift_name("rvm")));
@property (readonly) BOOL showFooter __attribute__((swift_name("showFooter")));
@property (readonly) BOOL showGuestCounter __attribute__((swift_name("showGuestCounter")));
@property (readonly) MealzcoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@end

__attribute__((swift_name("RouterOutletViewModel")))
@interface MealzcoreRouterOutletViewModel : MealzcoreBaseViewModel<MealzcoreRouterOutletContractEvent *, MealzcoreRouterOutletContractState *, MealzcoreRouterOutletContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreRouterOutletContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)goToDetailVmRecipe:(MealzcoreRecipeViewModel *)vmRecipe showDetailsFooter:(BOOL)showDetailsFooter showGuestCounter:(BOOL)showGuestCounter __attribute__((swift_name("goToDetail(vmRecipe:showDetailsFooter:showGuestCounter:)")));
- (void)goToPreviewVmRecipe:(MealzcoreRecipeViewModel *)vmRecipe recipeId:(NSString *)recipeId __attribute__((swift_name("goToPreview(vmRecipe:recipeId:)")));
- (void)handleEventEvent:(MealzcoreRouterOutletContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("FilterViewModel")))
@interface MealzcoreFilterViewModel : MealzcoreBaseViewModel<MealzcoreFilterContractEvent *, MealzcoreFilterContractState *, MealzcoreFilterContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreFilterViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)applyFilter __attribute__((swift_name("applyFilter()")));
- (void)clear __attribute__((swift_name("clear()")));
- (MealzcoreFilterContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (int32_t)getActiveFilterCount __attribute__((swift_name("getActiveFilterCount()")));
- (void)getRecipeCount __attribute__((swift_name("getRecipeCount()")));
- (NSDictionary<NSString *, NSString *> *)getSelectedFilters __attribute__((swift_name("getSelectedFilters()")));
- (void)handleEventEvent:(MealzcoreFilterContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (id<MealzcoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (void)setCatCatId:(NSString *)catId __attribute__((swift_name("setCat(catId:)")));
- (void)setFavorite __attribute__((swift_name("setFavorite()")));
- (void)setSearchStringSearchString:(NSString *)searchString __attribute__((swift_name("setSearchString(searchString:)")));
- (void)setSearchStringAndApplySearchString:(NSString *)searchString __attribute__((swift_name("setSearchStringAndApply(searchString:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@property (readonly) MealzcoreRecipeRepositoryImp *recipeRepositoryImp __attribute__((swift_name("recipeRepositoryImp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerFilterViewModel")))
@interface MealzcoreMealPlannerFilterViewModel : MealzcoreFilterViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getRecipeCount __attribute__((swift_name("getRecipeCount()")));
- (NSDictionary<NSString *, NSString *> *)getSelectedFilters __attribute__((swift_name("getSelectedFilters()")));
@end

__attribute__((swift_name("FilterViewModelFactory")))
@interface MealzcoreFilterViewModelFactory : MealzcoreFactoryViewModel<MealzcoreFilterViewModel *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreFilterViewModelFactoryCompanion *companion __attribute__((swift_name("companion")));
- (void)abolishInstanceKey:(NSString *)key __attribute__((swift_name("abolishInstance(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerFilterViewModelFactory")))
@interface MealzcoreMealPlannerFilterViewModelFactory : MealzcoreFilterViewModelFactory
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreFilterViewModel *)instantiateKey:(NSString *)key __attribute__((swift_name("instantiate(key:)")));
@end

__attribute__((swift_name("MealPlannerRecapContract")))
@protocol MealzcoreMealPlannerRecapContract
@required
@end

__attribute__((swift_name("MealPlannerRecapContractEffect")))
@interface MealzcoreMealPlannerRecapContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MealPlannerRecapContractEvent")))
@interface MealzcoreMealPlannerRecapContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerRecapContractState")))
@interface MealzcoreMealPlannerRecapContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithTotalPrice:(double)totalPrice numberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("init(totalPrice:numberOfMeals:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerRecapContractState *)doCopyTotalPrice:(double)totalPrice numberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("doCopy(totalPrice:numberOfMeals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numberOfMeals __attribute__((swift_name("numberOfMeals")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("MealPlannerRecapViewModel")))
@interface MealzcoreMealPlannerRecapViewModel : MealzcoreBaseViewModel<MealzcoreMealPlannerRecapContractEvent *, MealzcoreMealPlannerRecapContractState *, MealzcoreMealPlannerRecapContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreMealPlannerRecapContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreMealPlannerRecapContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("MealPlannerMealsContract")))
@protocol MealzcoreMealPlannerMealsContract
@required
@end

__attribute__((swift_name("MealPlannerMealsContractEffect")))
@interface MealzcoreMealPlannerMealsContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MealPlannerMealsContractEvent")))
@interface MealzcoreMealPlannerMealsContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerMealsContractState")))
@interface MealzcoreMealPlannerMealsContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithMeals:(MealzcoreBasicUiState<NSArray<id> *> *)meals totalPrice:(double)totalPrice numberOfMeal:(int32_t)numberOfMeal availablePosition:(NSArray<MealzcoreInt *> *)availablePosition __attribute__((swift_name("init(meals:totalPrice:numberOfMeal:availablePosition:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<id> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreInt *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerMealsContractState *)doCopyMeals:(MealzcoreBasicUiState<NSArray<id> *> *)meals totalPrice:(double)totalPrice numberOfMeal:(int32_t)numberOfMeal availablePosition:(NSArray<MealzcoreInt *> *)availablePosition __attribute__((swift_name("doCopy(meals:totalPrice:numberOfMeal:availablePosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MealzcoreInt *> *availablePosition __attribute__((swift_name("availablePosition")));
@property (readonly) MealzcoreBasicUiState<NSArray<id> *> *meals __attribute__((swift_name("meals")));
@property (readonly) int32_t numberOfMeal __attribute__((swift_name("numberOfMeal")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("MealPlannerMealsViewModel")))
@interface MealzcoreMealPlannerMealsViewModel : MealzcoreBaseViewModel<MealzcoreMealPlannerMealsContractEvent *, MealzcoreMealPlannerMealsContractState *, MealzcoreMealPlannerMealsContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addRecipesToGroceriesList __attribute__((swift_name("addRecipesToGroceriesList()")));
- (void)calculAvailableBudgetOnNavigateToReplaceRecipeTotalPrice:(double)totalPrice recipeToReplacePrice:(MealzcoreDouble * _Nullable)recipeToReplacePrice __attribute__((swift_name("calculAvailableBudgetOnNavigateToReplaceRecipe(totalPrice:recipeToReplacePrice:)")));
- (MealzcoreMealPlannerMealsContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreMealPlannerMealsContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPullToRefreshWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPullToRefresh(completionHandler:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)removeRecipeRecipeIndex:(int32_t)recipeIndex __attribute__((swift_name("removeRecipe(recipeIndex:)")));
@end

__attribute__((swift_name("RecipesPageViewModel")))
@interface MealzcoreRecipesPageViewModel : MealzcoreBaseViewModel<MealzcoreRecipesPageContractEvent *, MealzcoreRecipesPageContractState *, MealzcoreRecipesPageContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreRecipesPageContractState *)createInitialState __attribute__((swift_name("createInitialState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getRecipesDependingOnPosIdCurrentPage:(int32_t)currentPage recipeSort:(MealzcoreRecipeSort *)recipeSort completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesDependingOnPosId(currentPage:recipeSort:completionHandler:)")));
- (void)handleEventEvent:(MealzcoreRecipesPageContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)loadPage __attribute__((swift_name("loadPage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)loadPageForce:(BOOL)force __attribute__((swift_name("loadPage(force:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<MealzcoreRecipe *> *)postFilterRecipesList:(NSArray<MealzcoreRecipe *> *)recipesList __attribute__((swift_name("postFilter(recipesList:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) MealzcoreFilterViewModel *filterInstance __attribute__((swift_name("filterInstance")));
@end

__attribute__((swift_name("MealPlannerReplaceRecipePageViewModel")))
@interface MealzcoreMealPlannerReplaceRecipePageViewModel : MealzcoreRecipesPageViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addRecipeToMealPlannerRecipeId:(NSString *)recipeId index:(int32_t)index __attribute__((swift_name("addRecipeToMealPlanner(recipeId:index:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getRecipesDependingOnPosIdCurrentPage:(int32_t)currentPage recipeSort:(MealzcoreRecipeSort *)recipeSort completionHandler:(void (^)(NSArray<MealzcoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesDependingOnPosId(currentPage:recipeSort:completionHandler:)")));
- (void)doInitPage __attribute__((swift_name("doInitPage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<MealzcoreRecipe *> *)postFilterRecipesList:(NSArray<MealzcoreRecipe *> *)recipesList __attribute__((swift_name("postFilter(recipesList:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)searchInput:(NSString *)input __attribute__((swift_name("search(input:)")));
@property (readonly) MealzcoreFilterViewModel *filterInstance __attribute__((swift_name("filterInstance")));
@end

__attribute__((swift_name("MealPlannerFormContract")))
@protocol MealzcoreMealPlannerFormContract
@required
@end

__attribute__((swift_name("MealPlannerFormContractEffect")))
@interface MealzcoreMealPlannerFormContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MealPlannerFormContractEvent")))
@interface MealzcoreMealPlannerFormContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerFormContractState")))
@interface MealzcoreMealPlannerFormContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithBudget:(int32_t)budget numberOfGuests:(int32_t)numberOfGuests numberOfMeals:(int32_t)numberOfMeals recipeMaxCount:(int32_t)recipeMaxCount uiState:(MealzcoreComponentUiState *)uiState __attribute__((swift_name("init(budget:numberOfGuests:numberOfMeals:recipeMaxCount:uiState:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreComponentUiState *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerFormContractState *)doCopyBudget:(int32_t)budget numberOfGuests:(int32_t)numberOfGuests numberOfMeals:(int32_t)numberOfMeals recipeMaxCount:(int32_t)recipeMaxCount uiState:(MealzcoreComponentUiState *)uiState __attribute__((swift_name("doCopy(budget:numberOfGuests:numberOfMeals:recipeMaxCount:uiState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t budget __attribute__((swift_name("budget")));
@property (readonly) int32_t numberOfGuests __attribute__((swift_name("numberOfGuests")));
@property (readonly) int32_t numberOfMeals __attribute__((swift_name("numberOfMeals")));
@property (readonly) int32_t recipeMaxCount __attribute__((swift_name("recipeMaxCount")));
@property (readonly) MealzcoreComponentUiState *uiState __attribute__((swift_name("uiState")));
@end

__attribute__((swift_name("MealPlannerFormViewModel")))
@interface MealzcoreMealPlannerFormViewModel : MealzcoreBaseViewModel<MealzcoreMealPlannerFormContractEvent *, MealzcoreMealPlannerFormContractState *, MealzcoreMealPlannerFormContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreMealPlannerFormContractState *)createInitialState __attribute__((swift_name("createInitialState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintBudget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(budget:mealCount:guestCount:completionHandler:)")));
- (void)getRecipesMaxCountForBudgetConstraintBudget:(int32_t)budget guestCount:(int32_t)guestCount __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(budget:guestCount:)")));
- (void)handleEventEvent:(MealzcoreMealPlannerFormContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onInitComponent __attribute__((swift_name("onInitComponent()")));
- (void)setBudgetAmount:(int32_t)amount __attribute__((swift_name("setBudget(amount:)")));
- (void)setNumberOfGuestsAmount:(int32_t)amount __attribute__((swift_name("setNumberOfGuests(amount:)")));
- (void)setNumberOfMealsMealCount:(int32_t)mealCount __attribute__((swift_name("setNumberOfMeals(mealCount:)")));
@property (readonly) MealzcoreMealPlannerStore *mealPlannerStore __attribute__((swift_name("mealPlannerStore")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreFlow> recipeCountFlow __attribute__((swift_name("recipeCountFlow")));
@end

__attribute__((swift_name("MealPlannerBasketPreviewContract")))
@protocol MealzcoreMealPlannerBasketPreviewContract
@required
@end

__attribute__((swift_name("MealPlannerBasketPreviewContractEffect")))
@interface MealzcoreMealPlannerBasketPreviewContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MealPlannerBasketPreviewContractEvent")))
@interface MealzcoreMealPlannerBasketPreviewContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerBasketPreviewContractState")))
@interface MealzcoreMealPlannerBasketPreviewContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithStatus:(MealzcoreComponentUiState *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreComponentUiState *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerBasketPreviewContractState *)doCopyStatus:(MealzcoreComponentUiState *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreComponentUiState *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("MealPlannerBasketPreviewViewModel")))
@interface MealzcoreMealPlannerBasketPreviewViewModel : MealzcoreBaseViewModel<MealzcoreMealPlannerBasketPreviewContractEvent *, MealzcoreMealPlannerBasketPreviewContractState *, MealzcoreMealPlannerBasketPreviewContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreMealPlannerBasketPreviewContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreMealPlannerBasketPreviewContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onClickFinalize __attribute__((swift_name("onClickFinalize()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) int32_t budget __attribute__((swift_name("budget")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> isProcessing __attribute__((swift_name("isProcessing")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> productCount __attribute__((swift_name("productCount")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> recipesDetailsVM __attribute__((swift_name("recipesDetailsVM")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> totalPrice __attribute__((swift_name("totalPrice")));
@property BOOL vMInit __attribute__((swift_name("vMInit")));
@end

__attribute__((swift_name("DynamicRecipeDetailViewModel")))
@interface MealzcoreDynamicRecipeDetailViewModel : MealzcoreBaseViewModel<MealzcoreDynamicRecipeDetailContractEvent *, MealzcoreDynamicRecipeDetailContractState *, MealzcoreDynamicRecipeDetailContractEffect *>
- (instancetype)initWithContinueShopping:(void (^)(void))continueShopping changeProduct:(void (^)(NSString *))changeProduct __attribute__((swift_name("init(continueShopping:changeProduct:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)clearRecipeGuest __attribute__((swift_name("clearRecipeGuest()")));
- (MealzcoreDynamicRecipeDetailContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)handleEventEvent:(MealzcoreDynamicRecipeDetailContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> canBeAddedProduct __attribute__((swift_name("canBeAddedProduct")));
@property (readonly) void (^changeProduct)(NSString *) __attribute__((swift_name("changeProduct")));
@property (readonly) void (^continueShopping)(void) __attribute__((swift_name("continueShopping")));
@property (readonly) MealzcoreDynamicRecipeDetailFooterViewModel *dynamicRecipeDetailFooterViewModel __attribute__((swift_name("dynamicRecipeDetailFooterViewModel")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> guestIsUpdating __attribute__((swift_name("guestIsUpdating")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> oftenDeletedProduct __attribute__((swift_name("oftenDeletedProduct")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> recipeGuests __attribute__((swift_name("recipeGuests")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> unavailableProduct __attribute__((swift_name("unavailableProduct")));
@end

__attribute__((swift_name("MealPlannerBasketPreviewRecipeRowViewModel")))
@interface MealzcoreMealPlannerBasketPreviewRecipeRowViewModel : MealzcoreDynamicRecipeDetailViewModel
- (instancetype)initWithMealPlannerRowChangeNotifier:(id<MealzcoreNotifier>)mealPlannerRowChangeNotifier changeProduct:(void (^)(NSString *))changeProduct __attribute__((swift_name("init(mealPlannerRowChangeNotifier:changeProduct:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContinueShopping:(void (^)(void))continueShopping changeProduct:(void (^)(NSString *))changeProduct __attribute__((swift_name("init(continueShopping:changeProduct:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)deleteRecipe __attribute__((swift_name("deleteRecipe()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) void (^changeProduct)(NSString *) __attribute__((swift_name("changeProduct")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> deletedProduct __attribute__((swift_name("deletedProduct")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> foundProduct __attribute__((swift_name("foundProduct")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> recipeRowState __attribute__((swift_name("recipeRowState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRowState")))
@interface MealzcoreRecipeRowState : MealzcoreBase
- (instancetype)initWithAllFoundProductCount:(int32_t)allFoundProductCount recipePrice:(double)recipePrice childrenLoading:(BOOL)childrenLoading recipeDeleting:(BOOL)recipeDeleting recipePriceRefreshing:(BOOL)recipePriceRefreshing __attribute__((swift_name("init(allFoundProductCount:recipePrice:childrenLoading:recipeDeleting:recipePriceRefreshing:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeRowState *)doCopyAllFoundProductCount:(int32_t)allFoundProductCount recipePrice:(double)recipePrice childrenLoading:(BOOL)childrenLoading recipeDeleting:(BOOL)recipeDeleting recipePriceRefreshing:(BOOL)recipePriceRefreshing __attribute__((swift_name("doCopy(allFoundProductCount:recipePrice:childrenLoading:recipeDeleting:recipePriceRefreshing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t allFoundProductCount __attribute__((swift_name("allFoundProductCount")));
@property (readonly) BOOL childrenLoading __attribute__((swift_name("childrenLoading")));
@property (readonly) BOOL recipeDeleting __attribute__((swift_name("recipeDeleting")));
@property (readonly) double recipePrice __attribute__((swift_name("recipePrice")));
@property (readonly) BOOL recipePriceRefreshing __attribute__((swift_name("recipePriceRefreshing")));
@end

__attribute__((swift_name("ProductContract")))
@protocol MealzcoreProductContract
@required
@end

__attribute__((swift_name("ProductContractEffect")))
@interface MealzcoreProductContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("ProductContractEvent")))
@interface MealzcoreProductContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.AddFromParentIfPossible")))
@interface MealzcoreProductContractEventAddFromParentIfPossible : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addFromParentIfPossible __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventAddFromParentIfPossible *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.AddProduct")))
@interface MealzcoreProductContractEventAddProduct : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addProduct __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventAddProduct *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.IgnoreIngredient")))
@interface MealzcoreProductContractEventIgnoreIngredient : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ignoreIngredient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventIgnoreIngredient *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.Init")))
@interface MealzcoreProductContractEventInit : MealzcoreProductContractEvent
- (instancetype)initWithIngredient:(MealzcoreIngredient *)ingredient guests:(int32_t)guests __attribute__((swift_name("init(ingredient:guests:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreIngredient *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreProductContractEventInit *)doCopyIngredient:(MealzcoreIngredient *)ingredient guests:(int32_t)guests __attribute__((swift_name("doCopy(ingredient:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@property (readonly) MealzcoreIngredient *ingredient __attribute__((swift_name("ingredient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.LockFromParent")))
@interface MealzcoreProductContractEventLockFromParent : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lockFromParent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventLockFromParent *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.ReplaceProduct")))
@interface MealzcoreProductContractEventReplaceProduct : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)replaceProduct __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventReplaceProduct *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.SetGuests")))
@interface MealzcoreProductContractEventSetGuests : MealzcoreProductContractEvent
- (instancetype)initWithGuests:(int32_t)guests __attribute__((swift_name("init(guests:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreProductContractEventSetGuests *)doCopyGuests:(int32_t)guests __attribute__((swift_name("doCopy(guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.UnLockFromParent")))
@interface MealzcoreProductContractEventUnLockFromParent : MealzcoreProductContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unLockFromParent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreProductContractEventUnLockFromParent *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractEvent.UpdateProductQty")))
@interface MealzcoreProductContractEventUpdateProductQty : MealzcoreProductContractEvent
- (instancetype)initWithQuantity:(int32_t)quantity __attribute__((swift_name("init(quantity:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreProductContractEventUpdateProductQty *)doCopyQuantity:(int32_t)quantity __attribute__((swift_name("doCopy(quantity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductContractState")))
@interface MealzcoreProductContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithStatus:(MealzcoreComponentUiState *)status ingredient:(MealzcoreIngredient * _Nullable)ingredient basketEntry:(MealzcoreBasketEntry * _Nullable)basketEntry guests:(MealzcoreInt * _Nullable)guests __attribute__((swift_name("init(status:ingredient:basketEntry:guests:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreComponentUiState *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredient * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntry * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreProductContractState *)doCopyStatus:(MealzcoreComponentUiState *)status ingredient:(MealzcoreIngredient * _Nullable)ingredient basketEntry:(MealzcoreBasketEntry * _Nullable)basketEntry guests:(MealzcoreInt * _Nullable)guests __attribute__((swift_name("doCopy(status:ingredient:basketEntry:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry * _Nullable basketEntry __attribute__((swift_name("basketEntry")));
@property (readonly) MealzcoreInt * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) MealzcoreIngredient * _Nullable ingredient __attribute__((swift_name("ingredient")));
@property (readonly) MealzcoreComponentUiState *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("ProductViewModel")))
@interface MealzcoreProductViewModel : MealzcoreBaseViewModel<MealzcoreProductContractEvent *, MealzcoreProductContractState *, MealzcoreProductContractEffect *>
- (instancetype)initWithDynamicRecipeDetailNotifier:(MealzcoreDynamicRecipeDetailNotifier *)dynamicRecipeDetailNotifier __attribute__((swift_name("init(dynamicRecipeDetailNotifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MealzcoreProductContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreProductContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (BOOL)isSponsored __attribute__((swift_name("isSponsored()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> productQtySubject __attribute__((swift_name("productQtySubject")));
@property MealzcoreRecipe *recipe __attribute__((swift_name("recipe")));
@end

__attribute__((swift_name("DynamicRecipeDetailContract")))
@protocol MealzcoreDynamicRecipeDetailContract
@required
@end

__attribute__((swift_name("DynamicRecipeDetailContractEffect")))
@interface MealzcoreDynamicRecipeDetailContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("DynamicRecipeDetailContractEvent")))
@interface MealzcoreDynamicRecipeDetailContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailContractEvent.AddAllRemainingIngredients")))
@interface MealzcoreDynamicRecipeDetailContractEventAddAllRemainingIngredients : MealzcoreDynamicRecipeDetailContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addAllRemainingIngredients __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreDynamicRecipeDetailContractEventAddAllRemainingIngredients *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailContractEvent.Reset")))
@interface MealzcoreDynamicRecipeDetailContractEventReset : MealzcoreDynamicRecipeDetailContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reset __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreDynamicRecipeDetailContractEventReset *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailContractEvent.SetRecipeId")))
@interface MealzcoreDynamicRecipeDetailContractEventSetRecipeId : MealzcoreDynamicRecipeDetailContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailContractEventSetRecipeId *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailContractEvent.UpdateGuests")))
@interface MealzcoreDynamicRecipeDetailContractEventUpdateGuests : MealzcoreDynamicRecipeDetailContractEvent
- (instancetype)initWithGuests:(int32_t)guests __attribute__((swift_name("init(guests:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailContractEventUpdateGuests *)doCopyGuests:(int32_t)guests __attribute__((swift_name("doCopy(guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailContractState")))
@interface MealzcoreDynamicRecipeDetailContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipe:(MealzcoreBasicUiState<MealzcoreRecipe *> *)recipe recipeId:(NSString *)recipeId likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("init(recipe:recipeId:likeIsEnable:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<MealzcoreRecipe *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailContractState *)doCopyRecipe:(MealzcoreBasicUiState<MealzcoreRecipe *> *)recipe recipeId:(NSString *)recipeId likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("doCopy(recipe:recipeId:likeIsEnable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL likeIsEnable __attribute__((swift_name("likeIsEnable")));
@property (readonly) MealzcoreBasicUiState<MealzcoreRecipe *> *recipe __attribute__((swift_name("recipe")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((swift_name("FavoritePageContract")))
@protocol MealzcoreFavoritePageContract
@required
@end

__attribute__((swift_name("FavoritePageContractEffect")))
@interface MealzcoreFavoritePageContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("FavoritePageContractEvent")))
@interface MealzcoreFavoritePageContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageContractEvent.LoadPage")))
@interface MealzcoreFavoritePageContractEventLoadPage : MealzcoreFavoritePageContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loadPage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFavoritePageContractEventLoadPage *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageContractState")))
@interface MealzcoreFavoritePageContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithFavoritesRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)favoritesRecipes currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("init(favoritesRecipes:currentPage:isFetchingNewPage:noMoreData:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFavoritePageContractState *)doCopyFavoritesRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)favoritesRecipes currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("doCopy(favoritesRecipes:currentPage:isFetchingNewPage:noMoreData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *favoritesRecipes __attribute__((swift_name("favoritesRecipes")));
@property (readonly) BOOL isFetchingNewPage __attribute__((swift_name("isFetchingNewPage")));
@property (readonly) BOOL noMoreData __attribute__((swift_name("noMoreData")));
@end

__attribute__((swift_name("FavoritePageViewModel")))
@interface MealzcoreFavoritePageViewModel : MealzcoreBaseViewModel<MealzcoreFavoritePageContractEvent *, MealzcoreFavoritePageContractState *, MealzcoreFavoritePageContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreFavoritePageViewModelCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreFavoritePageContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreFavoritePageContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageViewModel.Companion")))
@interface MealzcoreFavoritePageViewModelCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFavoritePageViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDictionary<NSString *, NSString *> *FILTERS __attribute__((swift_name("FILTERS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContent")))
@interface MealzcoreCatalogContent : MealzcoreKotlinEnum<MealzcoreCatalogContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreCatalogContent *wordSearch __attribute__((swift_name("wordSearch")));
@property (class, readonly) MealzcoreCatalogContent *filterSearch __attribute__((swift_name("filterSearch")));
@property (class, readonly) MealzcoreCatalogContent *categoriesList __attribute__((swift_name("categoriesList")));
@property (class, readonly) MealzcoreCatalogContent *category __attribute__((swift_name("category")));
@property (class, readonly) MealzcoreCatalogContent *favorite __attribute__((swift_name("favorite")));
+ (MealzcoreKotlinArray<MealzcoreCatalogContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("CatalogContract")))
@protocol MealzcoreCatalogContract
@required
@end

__attribute__((swift_name("CatalogContractEffect")))
@interface MealzcoreCatalogContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("CatalogContractEvent")))
@interface MealzcoreCatalogContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractEvent.GoBack")))
@interface MealzcoreCatalogContractEventGoBack : MealzcoreCatalogContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goBack __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreCatalogContractEventGoBack *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractEvent.GoToFavorite")))
@interface MealzcoreCatalogContractEventGoToFavorite : MealzcoreCatalogContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToFavorite __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreCatalogContractEventGoToFavorite *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractState")))
@interface MealzcoreCatalogContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithCategories:(MealzcoreBasicUiState<NSArray<MealzcorePackage *> *> *)categories content:(MealzcoreCatalogContent *)content dialogIsOpen:(BOOL)dialogIsOpen dialogContent:(MealzcoreDialogContent *)dialogContent enableFilters:(BOOL)enableFilters enablePreferences:(BOOL)enablePreferences openedCategoryId:(NSString *)openedCategoryId openedCategoryTitle:(NSString *)openedCategoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("init(categories:content:dialogIsOpen:dialogContent:enableFilters:enablePreferences:openedCategoryId:openedCategoryTitle:subtitle:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcorePackage *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreCatalogContent *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDialogContent *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreCatalogContractState *)doCopyCategories:(MealzcoreBasicUiState<NSArray<MealzcorePackage *> *> *)categories content:(MealzcoreCatalogContent *)content dialogIsOpen:(BOOL)dialogIsOpen dialogContent:(MealzcoreDialogContent *)dialogContent enableFilters:(BOOL)enableFilters enablePreferences:(BOOL)enablePreferences openedCategoryId:(NSString *)openedCategoryId openedCategoryTitle:(NSString *)openedCategoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("doCopy(categories:content:dialogIsOpen:dialogContent:enableFilters:enablePreferences:openedCategoryId:openedCategoryTitle:subtitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcorePackage *> *> *categories __attribute__((swift_name("categories")));
@property (readonly) MealzcoreCatalogContent *content __attribute__((swift_name("content")));
@property (readonly) MealzcoreDialogContent *dialogContent __attribute__((swift_name("dialogContent")));
@property (readonly) BOOL dialogIsOpen __attribute__((swift_name("dialogIsOpen")));
@property (readonly) BOOL enableFilters __attribute__((swift_name("enableFilters")));
@property (readonly) BOOL enablePreferences __attribute__((swift_name("enablePreferences")));
@property (readonly) NSString *openedCategoryId __attribute__((swift_name("openedCategoryId")));
@property (readonly) NSString *openedCategoryTitle __attribute__((swift_name("openedCategoryTitle")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogFilterViewModel")))
@interface MealzcoreCatalogFilterViewModel : MealzcoreFilterViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getRecipeCount __attribute__((swift_name("getRecipeCount()")));
- (NSDictionary<NSString *, NSString *> *)getSelectedFilters __attribute__((swift_name("getSelectedFilters()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogFilterViewModelFactory")))
@interface MealzcoreCatalogFilterViewModelFactory : MealzcoreFilterViewModelFactory
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreFilterViewModel *)instantiateKey:(NSString *)key __attribute__((swift_name("instantiate(key:)")));
@end

__attribute__((swift_name("CatalogViewModel")))
@interface MealzcoreCatalogViewModel : MealzcoreBaseViewModel<MealzcoreCatalogContractEvent *, MealzcoreCatalogContractState *, MealzcoreCatalogContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreCatalogViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)close __attribute__((swift_name("close()")));
- (MealzcoreCatalogContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)enableFiltersEnable:(BOOL)enable __attribute__((swift_name("enableFilters(enable:)")));
- (void)enablePreferencesEnable:(BOOL)enable __attribute__((swift_name("enablePreferences(enable:)")));
- (void)goToCategoriesList __attribute__((swift_name("goToCategoriesList()")));
- (void)goToCategoryCategoryId:(NSString *)categoryId categoryTitle:(NSString *)categoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("goToCategory(categoryId:categoryTitle:subtitle:)")));
- (void)handleEventEvent:(MealzcoreCatalogContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onSimpleSearchContent:(MealzcoreCatalogContent *)content __attribute__((swift_name("onSimpleSearch(content:)")));
- (void)openFilter __attribute__((swift_name("openFilter()")));
- (void)openPreferences __attribute__((swift_name("openPreferences()")));
- (void)openSearch __attribute__((swift_name("openSearch()")));
- (void)pushInitialRoute __attribute__((swift_name("pushInitialRoute()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogViewModel.Companion")))
@interface MealzcoreCatalogViewModelCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreCatalogViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CATEGORIES_LIST_TITLE __attribute__((swift_name("CATEGORIES_LIST_TITLE")));
@property (readonly) NSString *FAVORITE_LIST_TITLE __attribute__((swift_name("FAVORITE_LIST_TITLE")));
@property (readonly) NSString *FILTER_LIST_TITLE __attribute__((swift_name("FILTER_LIST_TITLE")));
@property (readonly) NSString *RECIPE_LIST_TITLE __attribute__((swift_name("RECIPE_LIST_TITLE")));
@property (readonly) NSString *SEARCH_LIST_TITLE __attribute__((swift_name("SEARCH_LIST_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogContent")))
@interface MealzcoreDialogContent : MealzcoreKotlinEnum<MealzcoreDialogContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreDialogContent *filter __attribute__((swift_name("filter")));
@property (class, readonly) MealzcoreDialogContent *preferences __attribute__((swift_name("preferences")));
@property (class, readonly) MealzcoreDialogContent *search __attribute__((swift_name("search")));
+ (MealzcoreKotlinArray<MealzcoreDialogContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryViewModelViewModelContainer")))
@interface MealzcoreFactoryViewModelViewModelContainer<T> : MealzcoreBase
- (instancetype)initWithInstantiation:(int32_t)instantiation viewModel:(T _Nullable)viewModel __attribute__((swift_name("init(instantiation:viewModel:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFactoryViewModelViewModelContainer<T> *)doCopyInstantiation:(int32_t)instantiation viewModel:(T _Nullable)viewModel __attribute__((swift_name("doCopy(instantiation:viewModel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t instantiation __attribute__((swift_name("instantiation")));
@property (readonly) T _Nullable viewModel __attribute__((swift_name("viewModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuantityFormatter")))
@interface MealzcoreQuantityFormatter : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreQuantityFormatterDefault *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuantityFormatter.default")))
@interface MealzcoreQuantityFormatterDefault : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreQuantityFormatterDefault *shared __attribute__((swift_name("shared")));
- (NSString *)fracValue:(float)value maxdenominator:(int32_t)maxdenominator __attribute__((swift_name("frac(value:maxdenominator:)")));
- (NSString *)pluralizeUnit:(NSString *)unit __attribute__((swift_name("pluralize(unit:)")));
- (NSString *)readableFloatNumberValue:(float)value unit:(NSString * _Nullable)unit __attribute__((swift_name("readableFloatNumber(value:unit:)")));
- (float)realQuantitiesQuantity:(NSString *)quantity currentGuest:(int32_t)currentGuest recipeGuest:(int32_t)recipeGuest __attribute__((swift_name("realQuantities(quantity:currentGuest:recipeGuest:)")));
- (NSString *)render_fracOriginal_value:(float)original_value num:(float)num denom:(float)denom __attribute__((swift_name("render_frac(original_value:num:denom:)")));
- (NSString *)singularizeUnit:(NSString *)unit __attribute__((swift_name("singularize(unit:)")));
@end

__attribute__((swift_name("SponsorDetailsContract")))
@protocol MealzcoreSponsorDetailsContract
@required
@end

__attribute__((swift_name("SponsorDetailsContractEffect")))
@interface MealzcoreSponsorDetailsContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("SponsorDetailsContractEvent")))
@interface MealzcoreSponsorDetailsContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailsContractState")))
@interface MealzcoreSponsorDetailsContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithSponsorBlocks:(MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MealzcoreSponsor * _Nullable)sponsor __attribute__((swift_name("init(sponsorBlocks:sponsor:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsor * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorDetailsContractState *)doCopySponsorBlocks:(MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MealzcoreSponsor * _Nullable)sponsor __attribute__((swift_name("doCopy(sponsorBlocks:sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((swift_name("SponsorDetailsViewModel")))
@interface MealzcoreSponsorDetailsViewModel : MealzcoreBaseViewModel<MealzcoreSponsorDetailsContractEvent *, MealzcoreSponsorDetailsContractState *, MealzcoreSponsorDetailsContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreSponsorDetailsContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)fetchSponsorBlockByIdsSponsor:(MealzcoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
- (void)handleEventEvent:(MealzcoreSponsorDetailsContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("BasketPreviewContract")))
@protocol MealzcoreBasketPreviewContract
@required
@end

__attribute__((swift_name("BasketPreviewContractEffect")))
@interface MealzcoreBasketPreviewContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("BasketPreviewContractEvent")))
@interface MealzcoreBasketPreviewContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.CloseItemSelector")))
@interface MealzcoreBasketPreviewContractEventCloseItemSelector : MealzcoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)closeItemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketPreviewContractEventCloseItemSelector *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.KillJob")))
@interface MealzcoreBasketPreviewContractEventKillJob : MealzcoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)killJob __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketPreviewContractEventKillJob *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.RemoveRecipe")))
@interface MealzcoreBasketPreviewContractEventRemoveRecipe : MealzcoreBasketPreviewContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketPreviewContractEventRemoveRecipe *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.ReplaceItem")))
@interface MealzcoreBasketPreviewContractEventReplaceItem : MealzcoreBasketPreviewContractEvent
- (instancetype)initWithEntry:(MealzcoreBasketEntry *)entry itemId:(int32_t)itemId __attribute__((swift_name("init(entry:itemId:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketPreviewContractEventReplaceItem *)doCopyEntry:(MealzcoreBasketEntry *)entry itemId:(int32_t)itemId __attribute__((swift_name("doCopy(entry:itemId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasketEntry *entry __attribute__((swift_name("entry")));
@property (readonly) int32_t itemId __attribute__((swift_name("itemId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.ToggleLine")))
@interface MealzcoreBasketPreviewContractEventToggleLine : MealzcoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)toggleLine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketPreviewContractEventToggleLine *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractState")))
@interface MealzcoreBasketPreviewContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithShowLines:(BOOL)showLines recipeInfo:(MealzcoreBasicUiState<MealzcoreBasketPreviewInfo *> *)recipeInfo recipePrice:(double)recipePrice recipeGuest:(int32_t)recipeGuest isReloading:(BOOL)isReloading isDeletingRecipe:(BOOL)isDeletingRecipe __attribute__((swift_name("init(showLines:recipeInfo:recipePrice:recipeGuest:isReloading:isDeletingRecipe:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasicUiState<MealzcoreBasketPreviewInfo *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketPreviewContractState *)doCopyShowLines:(BOOL)showLines recipeInfo:(MealzcoreBasicUiState<MealzcoreBasketPreviewInfo *> *)recipeInfo recipePrice:(double)recipePrice recipeGuest:(int32_t)recipeGuest isReloading:(BOOL)isReloading isDeletingRecipe:(BOOL)isDeletingRecipe __attribute__((swift_name("doCopy(showLines:recipeInfo:recipePrice:recipeGuest:isReloading:isDeletingRecipe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isDeletingRecipe __attribute__((swift_name("isDeletingRecipe")));
@property (readonly) BOOL isReloading __attribute__((swift_name("isReloading")));
@property (readonly) int32_t recipeGuest __attribute__((swift_name("recipeGuest")));
@property (readonly) MealzcoreBasicUiState<MealzcoreBasketPreviewInfo *> *recipeInfo __attribute__((swift_name("recipeInfo")));
@property (readonly) double recipePrice __attribute__((swift_name("recipePrice")));
@property (readonly) BOOL showLines __attribute__((swift_name("showLines")));
@end

__attribute__((swift_name("BasketPreviewViewModel")))
@interface MealzcoreBasketPreviewViewModel : MealzcoreBaseViewModel<MealzcoreBasketPreviewContractEvent *, MealzcoreBasketPreviewContractState *, MealzcoreBasketPreviewContractEffect *>
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MealzcoreBasketPreviewContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreBasketPreviewContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)updateGuestOnUpdateGuest:(void (^)(MealzcoreInt *))onUpdateGuest guestCount:(int32_t)guestCount __attribute__((swift_name("updateGuest(onUpdateGuest:guestCount:)")));
- (void)updateGuestNbGuest:(int32_t)nbGuest __attribute__((swift_name("updateGuest(nbGuest:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> isReloadingFullRecipe __attribute__((swift_name("isReloadingFullRecipe")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewViewModel.LineUpdateState")))
@interface MealzcoreBasketPreviewViewModelLineUpdateState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithLineUpdates:(NSArray<MealzcoreBasketEntry *> *)lineUpdates __attribute__((swift_name("init(lineUpdates:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MealzcoreBasketEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketPreviewViewModelLineUpdateState *)doCopyLineUpdates:(NSArray<MealzcoreBasketEntry *> *)lineUpdates __attribute__((swift_name("doCopy(lineUpdates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *lineUpdates __attribute__((swift_name("lineUpdates")));
@end

__attribute__((swift_name("DynamicRecipeDetailFooterContract")))
@protocol MealzcoreDynamicRecipeDetailFooterContract
@required
@end

__attribute__((swift_name("DynamicRecipeDetailFooterContractEffect")))
@interface MealzcoreDynamicRecipeDetailFooterContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent")))
@interface MealzcoreDynamicRecipeDetailFooterContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.LockFromParent")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventLockFromParent : MealzcoreDynamicRecipeDetailFooterContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lockFromParent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreDynamicRecipeDetailFooterContractEventLockFromParent *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.OnTapContinueShopping")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventOnTapContinueShopping : MealzcoreDynamicRecipeDetailFooterContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onTapContinueShopping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreDynamicRecipeDetailFooterContractEventOnTapContinueShopping *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.SetGuests")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventSetGuests : MealzcoreDynamicRecipeDetailFooterContractEvent
- (instancetype)initWithGuests:(int32_t)guests __attribute__((swift_name("init(guests:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailFooterContractEventSetGuests *)doCopyGuests:(int32_t)guests __attribute__((swift_name("doCopy(guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.SetIngredientsStatus")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventSetIngredientsStatus : MealzcoreDynamicRecipeDetailFooterContractEvent
- (instancetype)initWithProductsInBasket:(NSArray<MealzcoreBasketEntry *> *)productsInBasket remainingAddableProducts:(NSArray<MealzcoreBasketEntry *> *)remainingAddableProducts __attribute__((swift_name("init(productsInBasket:remainingAddableProducts:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MealzcoreBasketEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntry *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailFooterContractEventSetIngredientsStatus *)doCopyProductsInBasket:(NSArray<MealzcoreBasketEntry *> *)productsInBasket remainingAddableProducts:(NSArray<MealzcoreBasketEntry *> *)remainingAddableProducts __attribute__((swift_name("doCopy(productsInBasket:remainingAddableProducts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *productsInBasket __attribute__((swift_name("productsInBasket")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *remainingAddableProducts __attribute__((swift_name("remainingAddableProducts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.SetRecipe")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventSetRecipe : MealzcoreDynamicRecipeDetailFooterContractEvent
- (instancetype)initWithRecipe:(MealzcoreRecipe *)recipe __attribute__((swift_name("init(recipe:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRecipe *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailFooterContractEventSetRecipe *)doCopyRecipe:(MealzcoreRecipe *)recipe __attribute__((swift_name("doCopy(recipe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRecipe *recipe __attribute__((swift_name("recipe")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractEvent.UnLockFromParent")))
@interface MealzcoreDynamicRecipeDetailFooterContractEventUnLockFromParent : MealzcoreDynamicRecipeDetailFooterContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unLockFromParent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreDynamicRecipeDetailFooterContractEventUnLockFromParent *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterContractState")))
@interface MealzcoreDynamicRecipeDetailFooterContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithPriceStatus:(MealzcoreComponentUiState *)priceStatus recipe:(MealzcoreRecipe * _Nullable)recipe guests:(MealzcoreInt * _Nullable)guests ingredientsStatus:(MealzcoreIngredientStatus *)ingredientsStatus __attribute__((swift_name("init(priceStatus:recipe:guests:ingredientsStatus:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreComponentUiState *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipe * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredientStatus *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDynamicRecipeDetailFooterContractState *)doCopyPriceStatus:(MealzcoreComponentUiState *)priceStatus recipe:(MealzcoreRecipe * _Nullable)recipe guests:(MealzcoreInt * _Nullable)guests ingredientsStatus:(MealzcoreIngredientStatus *)ingredientsStatus __attribute__((swift_name("doCopy(priceStatus:recipe:guests:ingredientsStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreInt * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) MealzcoreIngredientStatus *ingredientsStatus __attribute__((swift_name("ingredientsStatus")));
@property (readonly) MealzcoreComponentUiState *priceStatus __attribute__((swift_name("priceStatus")));
@property (readonly) MealzcoreRecipe * _Nullable recipe __attribute__((swift_name("recipe")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicRecipeDetailFooterViewModel")))
@interface MealzcoreDynamicRecipeDetailFooterViewModel : MealzcoreBaseViewModel<MealzcoreDynamicRecipeDetailFooterContractEvent *, MealzcoreDynamicRecipeDetailFooterContractState *, MealzcoreDynamicRecipeDetailFooterContractEffect *>
- (instancetype)initWithAddAllRemainingIngredients:(void (^)(void))addAllRemainingIngredients continueShopping:(void (^)(void))continueShopping __attribute__((swift_name("init(addAllRemainingIngredients:continueShopping:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MealzcoreDynamicRecipeDetailFooterContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreDynamicRecipeDetailFooterContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> isAddingRemainingIngredients __attribute__((swift_name("isAddingRemainingIngredients")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> priceOfProductsInBasket __attribute__((swift_name("priceOfProductsInBasket")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> priceOfRemainingProducts __attribute__((swift_name("priceOfRemainingProducts")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> priceProductsInBasketPerGuest __attribute__((swift_name("priceProductsInBasketPerGuest")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientStatus")))
@interface MealzcoreIngredientStatus : MealzcoreBase
- (instancetype)initWithType:(MealzcoreIngredientStatusTypes *)type count:(int32_t)count __attribute__((swift_name("init(type:count:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreIngredientStatusTypes *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredientStatus *)doCopyType:(MealzcoreIngredientStatusTypes *)type count:(int32_t)count __attribute__((swift_name("doCopy(type:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) MealzcoreIngredientStatusTypes *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientStatusTypes")))
@interface MealzcoreIngredientStatusTypes : MealzcoreKotlinEnum<MealzcoreIngredientStatusTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreIngredientStatusTypes *initialState __attribute__((swift_name("initialState")));
@property (class, readonly) MealzcoreIngredientStatusTypes *noMoreToAdd __attribute__((swift_name("noMoreToAdd")));
@property (class, readonly) MealzcoreIngredientStatusTypes *remainingIngredientsToBeAdded __attribute__((swift_name("remainingIngredientsToBeAdded")));
+ (MealzcoreKotlinArray<MealzcoreIngredientStatusTypes *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailState")))
@interface MealzcoreSponsorDetailState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithSponsorBlocks:(MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MealzcoreSponsor * _Nullable)sponsor __attribute__((swift_name("init(sponsorBlocks:sponsor:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsor * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorDetailState *)doCopySponsorBlocks:(MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MealzcoreSponsor * _Nullable)sponsor __attribute__((swift_name("doCopy(sponsorBlocks:sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreSponsorBlock *> *> *sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((swift_name("SponsorDetailViewModel")))
@protocol MealzcoreSponsorDetailViewModel
@required
- (void)fetchSponsorBlockByIdsSponsor:(MealzcoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
- (void)fetchSponsorBlockByIdsSponsorId:(NSString *)sponsorId __attribute__((swift_name("fetchSponsorBlockByIds(sponsorId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailViewModelImpl")))
@interface MealzcoreSponsorDetailViewModelImpl : MealzcoreBase <MealzcoreKotlinx_coroutines_coreCoroutineScope, MealzcoreSponsorDetailViewModel>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)fetchSponsorBlockByIdsSponsor:(MealzcoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
- (void)fetchSponsorBlockByIdsSponsorId:(NSString *)sponsorId __attribute__((swift_name("fetchSponsorBlockByIds(sponsorId:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("FilterContract")))
@protocol MealzcoreFilterContract
@required
@end

__attribute__((swift_name("FilterContractEffect")))
@interface MealzcoreFilterContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterContractEffect.OnUpdate")))
@interface MealzcoreFilterContractEffectOnUpdate : MealzcoreFilterContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFilterContractEffectOnUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("FilterContractEvent")))
@interface MealzcoreFilterContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterContractEvent.OnCostFilterChanged")))
@interface MealzcoreFilterContractEventOnCostFilterChanged : MealzcoreFilterContractEvent
- (instancetype)initWithCostFilter:(MealzcoreCatalogFilterOptions *)costFilter __attribute__((swift_name("init(costFilter:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFilterContractEventOnCostFilterChanged *)doCopyCostFilter:(MealzcoreCatalogFilterOptions *)costFilter __attribute__((swift_name("doCopy(costFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreCatalogFilterOptions *costFilter __attribute__((swift_name("costFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterContractEvent.OnDifficultyChanged")))
@interface MealzcoreFilterContractEventOnDifficultyChanged : MealzcoreFilterContractEvent
- (instancetype)initWithDifficulty:(MealzcoreCatalogFilterOptions *)difficulty __attribute__((swift_name("init(difficulty:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFilterContractEventOnDifficultyChanged *)doCopyDifficulty:(MealzcoreCatalogFilterOptions *)difficulty __attribute__((swift_name("doCopy(difficulty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreCatalogFilterOptions *difficulty __attribute__((swift_name("difficulty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterContractEvent.OnTimeFilterChanged")))
@interface MealzcoreFilterContractEventOnTimeFilterChanged : MealzcoreFilterContractEvent
- (instancetype)initWithTimeFilter:(MealzcoreCatalogFilterOptions *)timeFilter __attribute__((swift_name("init(timeFilter:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFilterContractEventOnTimeFilterChanged *)doCopyTimeFilter:(MealzcoreCatalogFilterOptions *)timeFilter __attribute__((swift_name("doCopy(timeFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreCatalogFilterOptions *timeFilter __attribute__((swift_name("timeFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterContractState")))
@interface MealzcoreFilterContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithNumberOfResult:(int32_t)numberOfResult difficulty:(NSArray<MealzcoreCatalogFilterOptions *> *)difficulty cost:(NSArray<MealzcoreCatalogFilterOptions *> *)cost time:(NSArray<MealzcoreCatalogFilterOptions *> *)time searchString:(NSString * _Nullable)searchString isFavorite:(BOOL)isFavorite category:(NSString * _Nullable)category __attribute__((swift_name("init(numberOfResult:difficulty:cost:time:searchString:isFavorite:category:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCatalogFilterOptions *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCatalogFilterOptions *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCatalogFilterOptions *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFilterContractState *)doCopyNumberOfResult:(int32_t)numberOfResult difficulty:(NSArray<MealzcoreCatalogFilterOptions *> *)difficulty cost:(NSArray<MealzcoreCatalogFilterOptions *> *)cost time:(NSArray<MealzcoreCatalogFilterOptions *> *)time searchString:(NSString * _Nullable)searchString isFavorite:(BOOL)isFavorite category:(NSString * _Nullable)category __attribute__((swift_name("doCopy(numberOfResult:difficulty:cost:time:searchString:isFavorite:category:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSArray<MealzcoreCatalogFilterOptions *> *cost __attribute__((swift_name("cost")));
@property (readonly) NSArray<MealzcoreCatalogFilterOptions *> *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) BOOL isFavorite __attribute__((swift_name("isFavorite")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@property (readonly) NSString * _Nullable searchString __attribute__((swift_name("searchString")));
@property (readonly) NSArray<MealzcoreCatalogFilterOptions *> *time __attribute__((swift_name("time")));
@end

__attribute__((swift_name("FilterEffect")))
@interface MealzcoreFilterEffect : MealzcoreBase <MealzcoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterEffect.OnUpdate")))
@interface MealzcoreFilterEffectOnUpdate : MealzcoreFilterEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFilterEffectOnUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterInstance")))
@interface MealzcoreFilterInstance : MealzcoreBase
- (instancetype)initWithFilterType:(MealzcoreFilterInstanceType *)filterType __attribute__((swift_name("init(filterType:)"))) __attribute__((objc_designated_initializer));
- (void)clearFilters __attribute__((swift_name("clearFilters()")));
@property (readonly) MealzcoreFilterViewModel *viewModel __attribute__((swift_name("viewModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterInstanceType")))
@interface MealzcoreFilterInstanceType : MealzcoreKotlinEnum<MealzcoreFilterInstanceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreFilterInstanceType *catalog __attribute__((swift_name("catalog")));
@property (class, readonly) MealzcoreFilterInstanceType *mealPlanner __attribute__((swift_name("mealPlanner")));
+ (MealzcoreKotlinArray<MealzcoreFilterInstanceType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterViewModel.Companion")))
@interface MealzcoreFilterViewModelCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFilterViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreFilterContractState *filterState __attribute__((swift_name("filterState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterViewModelFactory.Companion")))
@interface MealzcoreFilterViewModelFactoryCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreFilterViewModelFactoryCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) MealzcoreMutableDictionary<NSString *, MealzcoreFactoryViewModelViewModelContainer<MealzcoreFilterViewModel *> *> *filterViewModels __attribute__((swift_name("filterViewModels")));
@end

__attribute__((swift_name("RecipeCarouselContract")))
@protocol MealzcoreRecipeCarouselContract
@required
@end

__attribute__((swift_name("RecipeCarouselContractEffect")))
@interface MealzcoreRecipeCarouselContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("RecipeCarouselContractEvent")))
@interface MealzcoreRecipeCarouselContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractEvent.GetRecipeSuggestionsFromCriteria")))
@interface MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria : MealzcoreRecipeCarouselContractEvent
- (instancetype)initWithCriteria:(MealzcoreSuggestionsCriteria *)criteria numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("init(criteria:numberOfResult:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreSuggestionsCriteria *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria *)doCopyCriteria:(MealzcoreSuggestionsCriteria *)criteria numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("doCopy(criteria:numberOfResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSuggestionsCriteria *criteria __attribute__((swift_name("criteria")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractEvent.GetRecipeSuggestionsFromId")))
@interface MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromId : MealzcoreRecipeCarouselContractEvent
- (instancetype)initWithProductId:(NSString *)productId numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("init(productId:numberOfResult:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeCarouselContractEventGetRecipeSuggestionsFromId *)doCopyProductId:(NSString *)productId numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("doCopy(productId:numberOfResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractState")))
@interface MealzcoreRecipeCarouselContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithSuggestions:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)suggestions __attribute__((swift_name("init(suggestions:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeCarouselContractState *)doCopySuggestions:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)suggestions __attribute__((swift_name("doCopy(suggestions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *suggestions __attribute__((swift_name("suggestions")));
@end

__attribute__((swift_name("RecipeCarouselViewModel")))
@interface MealzcoreRecipeCarouselViewModel : MealzcoreBaseViewModel<MealzcoreRecipeCarouselContractEvent *, MealzcoreRecipeCarouselContractState *, MealzcoreRecipeCarouselContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreRecipeCarouselContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreRecipeCarouselContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesContent")))
@interface MealzcorePreferencesContent : MealzcoreKotlinEnum<MealzcorePreferencesContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcorePreferencesContent *allPrefrences __attribute__((swift_name("allPrefrences")));
@property (class, readonly) MealzcorePreferencesContent *searchPrefrerences __attribute__((swift_name("searchPrefrerences")));
+ (MealzcoreKotlinArray<MealzcorePreferencesContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("PreferencesContract")))
@protocol MealzcorePreferencesContract
@required
@end

__attribute__((swift_name("PreferencesContractEffect")))
@interface MealzcorePreferencesContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("PreferencesContractEvent")))
@interface MealzcorePreferencesContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesContractState")))
@interface MealzcorePreferencesContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithBasicState:(MealzcoreBasicUiState<MealzcorePreferencesContent *> *)basicState diets:(NSArray<MealzcoreCheckableTag *> *)diets ingredients:(NSArray<MealzcoreCheckableTag *> *)ingredients equipments:(NSArray<MealzcoreCheckableTag *> *)equipments recipesFound:(int32_t)recipesFound guests:(MealzcoreInt * _Nullable)guests __attribute__((swift_name("init(basicState:diets:ingredients:equipments:recipesFound:guests:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<MealzcorePreferencesContent *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCheckableTag *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCheckableTag *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreCheckableTag *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePreferencesContractState *)doCopyBasicState:(MealzcoreBasicUiState<MealzcorePreferencesContent *> *)basicState diets:(NSArray<MealzcoreCheckableTag *> *)diets ingredients:(NSArray<MealzcoreCheckableTag *> *)ingredients equipments:(NSArray<MealzcoreCheckableTag *> *)equipments recipesFound:(int32_t)recipesFound guests:(MealzcoreInt * _Nullable)guests __attribute__((swift_name("doCopy(basicState:diets:ingredients:equipments:recipesFound:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<MealzcorePreferencesContent *> *basicState __attribute__((swift_name("basicState")));
@property (readonly) NSArray<MealzcoreCheckableTag *> *diets __attribute__((swift_name("diets")));
@property (readonly) NSArray<MealzcoreCheckableTag *> *equipments __attribute__((swift_name("equipments")));
@property (readonly) MealzcoreInt * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) NSArray<MealzcoreCheckableTag *> *ingredients __attribute__((swift_name("ingredients")));
@property (readonly) int32_t recipesFound __attribute__((swift_name("recipesFound")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesViewModelInstance")))
@interface MealzcorePreferencesViewModelInstance : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesViewModelInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePreferencesViewModelInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreSingletonPreferencesViewModel *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("SingletonPreferencesViewModel")))
@interface MealzcoreSingletonPreferencesViewModel : MealzcoreBaseViewModel<MealzcorePreferencesContractEvent *, MealzcorePreferencesContractState *, MealzcorePreferencesContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreSingletonPreferencesViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)addIngredientPreferenceTag:(MealzcoreTag *)tag __attribute__((swift_name("addIngredientPreference(tag:)")));
- (void)applyPreferences __attribute__((swift_name("applyPreferences()")));
- (void)back __attribute__((swift_name("back()")));
- (void)changeGlobalGuestNumberOfGuest:(int32_t)numberOfGuest __attribute__((swift_name("changeGlobalGuest(numberOfGuest:)")));
- (MealzcorePreferencesContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (NSDictionary<NSString *, NSString *> *)getPreferences __attribute__((swift_name("getPreferences()")));
- (MealzcoreInt * _Nullable)globalGuestCountOrNull __attribute__((swift_name("globalGuestCountOrNull()")));
- (void)goToAllPref __attribute__((swift_name("goToAllPref()")));
- (void)goToSearchPrefAndPushRoute __attribute__((swift_name("goToSearchPrefAndPushRoute()")));
- (MealzcoreInt * _Nullable)guestOrNullFromLocal __attribute__((swift_name("guestOrNullFromLocal()")));
- (void)handleEventEvent:(MealzcorePreferencesContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)resetPreferences __attribute__((swift_name("resetPreferences()")));
- (void)togglePreferenceTagIdToToggle:(NSString *)tagIdToToggle __attribute__((swift_name("togglePreference(tagIdToToggle:)")));
@property (readonly) NSArray<MealzcoreCheckableTag *> *allTags __attribute__((swift_name("allTags")));
@property (readonly) BOOL isInit __attribute__((swift_name("isInit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonPreferencesViewModel.Companion")))
@interface MealzcoreSingletonPreferencesViewModelCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSingletonPreferencesViewModelCompanion *shared __attribute__((swift_name("shared")));
- (MealzcorePreferencesContractState *)getInitialPref __attribute__((swift_name("getInitialPref()")));
@property (readonly) NSString *LOCAL_DIET_KEY __attribute__((swift_name("LOCAL_DIET_KEY")));
@property (readonly) NSString *LOCAL_EQUIPMENT_KEY __attribute__((swift_name("LOCAL_EQUIPMENT_KEY")));
@property (readonly) NSString *LOCAL_GUEST_KEY __attribute__((swift_name("LOCAL_GUEST_KEY")));
@property (readonly) NSString *LOCAL_INGREDIENT_KEY __attribute__((swift_name("LOCAL_INGREDIENT_KEY")));
@property (readonly) NSArray<NSString *> *defaultIngredientTagIds __attribute__((swift_name("defaultIngredientTagIds")));
@end

__attribute__((swift_name("MyMealContract")))
@protocol MealzcoreMyMealContract
@required
@end

__attribute__((swift_name("MyMealContractEffect")))
@interface MealzcoreMyMealContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MyMealContractEvent")))
@interface MealzcoreMyMealContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMealContractState")))
@interface MealzcoreMyMealContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipes totalPrice:(double)totalPrice productCount:(int32_t)productCount __attribute__((swift_name("init(recipes:totalPrice:productCount:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMyMealContractState *)doCopyRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipes totalPrice:(double)totalPrice productCount:(int32_t)productCount __attribute__((swift_name("doCopy(recipes:totalPrice:productCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t productCount __attribute__((swift_name("productCount")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *recipes __attribute__((swift_name("recipes")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("MyMealViewModel")))
@interface MealzcoreMyMealViewModel : MealzcoreBaseViewModel<MealzcoreMyMealContractEvent *, MealzcoreMyMealContractState *, MealzcoreMyMealContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreMyMealContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreMyMealContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((swift_name("MyMealButtonContract")))
@protocol MealzcoreMyMealButtonContract
@required
@end

__attribute__((swift_name("MyMealButtonContractEffect")))
@interface MealzcoreMyMealButtonContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("MyMealButtonContractEvent")))
@interface MealzcoreMyMealButtonContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMealButtonContractState")))
@interface MealzcoreMyMealButtonContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipeCount:(MealzcoreBasicUiState<MealzcoreInt *> *)recipeCount __attribute__((swift_name("init(recipeCount:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<MealzcoreInt *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMyMealButtonContractState *)doCopyRecipeCount:(MealzcoreBasicUiState<MealzcoreInt *> *)recipeCount __attribute__((swift_name("doCopy(recipeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBasicUiState<MealzcoreInt *> *recipeCount __attribute__((swift_name("recipeCount")));
@end

__attribute__((swift_name("MyMealButtonViewModel")))
@interface MealzcoreMyMealButtonViewModel : MealzcoreBaseViewModel<MealzcoreMyMealButtonContractEvent *, MealzcoreMyMealButtonContractState *, MealzcoreMyMealButtonContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreMyMealButtonContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreMyMealButtonContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((swift_name("ItemSelectorContract")))
@protocol MealzcoreItemSelectorContract
@required
@end

__attribute__((swift_name("ItemSelectorContractEffect")))
@interface MealzcoreItemSelectorContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("ItemSelectorContractEvent")))
@interface MealzcoreItemSelectorContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.InitWithIngredientId")))
@interface MealzcoreItemSelectorContractEventInitWithIngredientId : MealzcoreItemSelectorContractEvent
- (instancetype)initWithIngredientId:(NSString *)ingredientId __attribute__((swift_name("init(ingredientId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemSelectorContractEventInitWithIngredientId *)doCopyIngredientId:(NSString *)ingredientId __attribute__((swift_name("doCopy(ingredientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ingredientId __attribute__((swift_name("ingredientId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.ReturnToDetail")))
@interface MealzcoreItemSelectorContractEventReturnToDetail : MealzcoreItemSelectorContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)returnToDetail __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemSelectorContractEventReturnToDetail *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.Search")))
@interface MealzcoreItemSelectorContractEventSearch : MealzcoreItemSelectorContractEvent
- (instancetype)initWithSearchString:(NSString *)searchString __attribute__((swift_name("init(searchString:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemSelectorContractEventSearch *)doCopySearchString:(NSString *)searchString __attribute__((swift_name("doCopy(searchString:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *searchString __attribute__((swift_name("searchString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.SelectItem")))
@interface MealzcoreItemSelectorContractEventSelectItem : MealzcoreItemSelectorContractEvent
- (instancetype)initWithItem:(MealzcoreItem *)item __attribute__((swift_name("init(item:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreItem *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemSelectorContractEventSelectItem *)doCopyItem:(MealzcoreItem *)item __attribute__((swift_name("doCopy(item:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreItem *item __attribute__((swift_name("item")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractState")))
@interface MealzcoreItemSelectorContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithItems:(MealzcoreBasicUiState<NSArray<MealzcoreItem *> *> *)items selectedItem:(MealzcoreItem * _Nullable)selectedItem ingredientId:(NSString *)ingredientId ingredientName:(NSString *)ingredientName ingredientQuantity:(int32_t)ingredientQuantity ingredientUnit:(NSString *)ingredientUnit guestCount:(int32_t)guestCount defaultRecipeGuest:(int32_t)defaultRecipeGuest onItemSelected:(void (^)(NSString *))onItemSelected __attribute__((swift_name("init(items:selectedItem:ingredientId:ingredientName:ingredientQuantity:ingredientUnit:guestCount:defaultRecipeGuest:onItemSelected:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreItem *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItem * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(NSString *))component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemSelectorContractState *)doCopyItems:(MealzcoreBasicUiState<NSArray<MealzcoreItem *> *> *)items selectedItem:(MealzcoreItem * _Nullable)selectedItem ingredientId:(NSString *)ingredientId ingredientName:(NSString *)ingredientName ingredientQuantity:(int32_t)ingredientQuantity ingredientUnit:(NSString *)ingredientUnit guestCount:(int32_t)guestCount defaultRecipeGuest:(int32_t)defaultRecipeGuest onItemSelected:(void (^)(NSString *))onItemSelected __attribute__((swift_name("doCopy(items:selectedItem:ingredientId:ingredientName:ingredientQuantity:ingredientUnit:guestCount:defaultRecipeGuest:onItemSelected:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultRecipeGuest __attribute__((swift_name("defaultRecipeGuest")));
@property (readonly) int32_t guestCount __attribute__((swift_name("guestCount")));
@property (readonly) NSString *ingredientId __attribute__((swift_name("ingredientId")));
@property (readonly) NSString *ingredientName __attribute__((swift_name("ingredientName")));
@property (readonly) int32_t ingredientQuantity __attribute__((swift_name("ingredientQuantity")));
@property (readonly) NSString *ingredientUnit __attribute__((swift_name("ingredientUnit")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreItem *> *> *items __attribute__((swift_name("items")));
@property (readonly) void (^onItemSelected)(NSString *) __attribute__((swift_name("onItemSelected")));
@property (readonly) MealzcoreItem * _Nullable selectedItem __attribute__((swift_name("selectedItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorEmptyStates")))
@interface MealzcoreItemSelectorEmptyStates : MealzcoreKotlinEnum<MealzcoreItemSelectorEmptyStates *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreItemSelectorEmptyStates *noResultsAfterSearch __attribute__((swift_name("noResultsAfterSearch")));
@property (class, readonly) MealzcoreItemSelectorEmptyStates *noSubstituteProducts __attribute__((swift_name("noSubstituteProducts")));
+ (MealzcoreKotlinArray<MealzcoreItemSelectorEmptyStates *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ItemSelectorViewModel")))
@interface MealzcoreItemSelectorViewModel : MealzcoreBaseViewModel<MealzcoreItemSelectorContractEvent *, MealzcoreItemSelectorContractState *, MealzcoreItemSelectorContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreItemSelectorContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MealzcoreItemSelectorContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) MealzcoreItemSelectorEmptyStates *emptyState __attribute__((swift_name("emptyState")));
@end

__attribute__((swift_name("RecipesPageContract")))
@protocol MealzcoreRecipesPageContract
@required
@end

__attribute__((swift_name("RecipesPageContractEffect")))
@interface MealzcoreRecipesPageContractEffect : MealzcoreBase <MealzcoreUiEffect>
@end

__attribute__((swift_name("RecipesPageContractEvent")))
@interface MealzcoreRecipesPageContractEvent : MealzcoreBase <MealzcoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipesPageContractState")))
@interface MealzcoreRecipesPageContractState : MealzcoreBase <MealzcoreUiState>
- (instancetype)initWithRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipes isFetchingNewPage:(BOOL)isFetchingNewPage __attribute__((swift_name("init(recipes:isFetchingNewPage:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipesPageContractState *)doCopyRecipes:(MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *)recipes isFetchingNewPage:(BOOL)isFetchingNewPage __attribute__((swift_name("doCopy(recipes:isFetchingNewPage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isFetchingNewPage __attribute__((swift_name("isFetchingNewPage")));
@property (readonly) MealzcoreBasicUiState<NSArray<MealzcoreRecipe *> *> *recipes __attribute__((swift_name("recipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18nResolver")))
@interface MealzcoreI18nResolver : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)i18nResolver __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreI18nResolver *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)localizeI18nResource:(id<MealzcoreI18nResource>)i18nResource __attribute__((swift_name("localize(i18nResource:)")));
- (void)registerAppBundleBundle:(NSBundle *)bundle __attribute__((swift_name("registerAppBundle(bundle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation")))
@interface MealzcoreLocalisation : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localisation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisation *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Basket")))
@interface MealzcoreLocalisationBasket : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationBasket *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)articlesNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("articles(numberOfProducts:)")));
- (MealzcoreI18n *)forRecipeNumberOfRecipe:(int32_t)numberOfRecipe __attribute__((swift_name("forRecipe(numberOfRecipe:)")));
- (MealzcoreI18n *)inRecipeNumberOfRecipe:(int32_t)numberOfRecipe __attribute__((swift_name("inRecipe(numberOfRecipe:)")));
- (MealzcoreI18n *)ownedProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("ownedProducts(numberOfProducts:)")));
- (MealzcoreI18n *)removedProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("removedProducts(numberOfProducts:)")));
- (MealzcoreI18n *)unavailableProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("unavailableProducts(numberOfProducts:)")));
@property (readonly) MealzcoreI18n *addProduct __attribute__((swift_name("addProduct")));
@property (readonly) MealzcoreI18n *continueShopping __attribute__((swift_name("continueShopping")));
@property (readonly) MealzcoreI18n *moreDetails __attribute__((swift_name("moreDetails")));
@property (readonly) MealzcoreI18n *person __attribute__((swift_name("person")));
@property (readonly) MealzcoreI18n *recipeAdded __attribute__((swift_name("recipeAdded")));
@property (readonly) MealzcoreI18n *removeRecipe __attribute__((swift_name("removeRecipe")));
@property (readonly) MealzcoreI18n *sponsored __attribute__((swift_name("sponsored")));
@property (readonly) MealzcoreI18n *swapProduct __attribute__((swift_name("swapProduct")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Budget")))
@interface MealzcoreLocalisationBudget : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)budget __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationBudget *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)mealPlannerMealsForNumberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("mealPlannerMealsFor(numberOfMeals:)")));
@property (readonly) MealzcoreI18n *addMealIdea __attribute__((swift_name("addMealIdea")));
@property (readonly) MealzcoreI18n *mealPlannerDiscover __attribute__((swift_name("mealPlannerDiscover")));
@property (readonly) MealzcoreI18n *mealPlannerFinalize __attribute__((swift_name("mealPlannerFinalize")));
@property (readonly) MealzcoreI18n *mealPlannerProductAdded __attribute__((swift_name("mealPlannerProductAdded")));
@property (readonly) MealzcoreI18n *mealPlannerPromotion __attribute__((swift_name("mealPlannerPromotion")));
@property (readonly) MealzcoreI18n *mealPlannerSearchFailed __attribute__((swift_name("mealPlannerSearchFailed")));
@property (readonly) MealzcoreI18n *myBudget __attribute__((swift_name("myBudget")));
@property (readonly) MealzcoreI18n *myBudgetChangeRecipe __attribute__((swift_name("myBudgetChangeRecipe")));
@property (readonly) MealzcoreI18n *myBudgetSubtext __attribute__((swift_name("myBudgetSubtext")));
@property (readonly) MealzcoreI18n *noResultsForBudget __attribute__((swift_name("noResultsForBudget")));
@property (readonly) MealzcoreI18n *numberOfGuestsTitle __attribute__((swift_name("numberOfGuestsTitle")));
@property (readonly) MealzcoreI18n *numberOfMealsTitle __attribute__((swift_name("numberOfMealsTitle")));
@property (readonly) MealzcoreI18n *planMealsTitle __attribute__((swift_name("planMealsTitle")));
@property (readonly) MealzcoreI18n *recipeCollectionTitle __attribute__((swift_name("recipeCollectionTitle")));
@property (readonly) MealzcoreI18n *replaceItem __attribute__((swift_name("replaceItem")));
@property (readonly) MealzcoreI18n *searchForRecipe __attribute__((swift_name("searchForRecipe")));
@property (readonly) MealzcoreI18n *totalBudgetTitle __attribute__((swift_name("totalBudgetTitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Catalog")))
@interface MealzcoreLocalisationCatalog : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)catalog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationCatalog *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)showResultsNumberOfResults:(int32_t)numberOfResults __attribute__((swift_name("showResults(numberOfResults:)")));
@property (readonly) MealzcoreI18n *browseRecipes __attribute__((swift_name("browseRecipes")));
@property (readonly) MealzcoreI18n *costPerPerson __attribute__((swift_name("costPerPerson")));
@property (readonly) MealzcoreI18n *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) MealzcoreI18n *favoriteTitle __attribute__((swift_name("favoriteTitle")));
@property (readonly) MealzcoreI18n *filtersTitle __attribute__((swift_name("filtersTitle")));
@property (readonly) MealzcoreI18n *loadingText __attribute__((swift_name("loadingText")));
@property (readonly) MealzcoreI18n *noRecipeFound __attribute__((swift_name("noRecipeFound")));
@property (readonly) MealzcoreI18n *noRecipeFoundCategory __attribute__((swift_name("noRecipeFoundCategory")));
@property (readonly) MealzcoreI18n *noRecipeFoundFilter __attribute__((swift_name("noRecipeFoundFilter")));
@property (readonly) MealzcoreI18n *preferencesNoResult __attribute__((swift_name("preferencesNoResult")));
@property (readonly) MealzcoreI18n *preferencesTryAnother __attribute__((swift_name("preferencesTryAnother")));
@property (readonly) MealzcoreI18n *preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) MealzcoreI18n *removeFilters __attribute__((swift_name("removeFilters")));
@property (readonly) MealzcoreI18n *resultsTitle __attribute__((swift_name("resultsTitle")));
@property (readonly) MealzcoreI18n *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@property (readonly) MealzcoreI18n *searchPrefix __attribute__((swift_name("searchPrefix")));
@property (readonly) MealzcoreI18n *searchTitle __attribute__((swift_name("searchTitle")));
@property (readonly) MealzcoreI18n *showAll __attribute__((swift_name("showAll")));
@property (readonly) MealzcoreI18n *title __attribute__((swift_name("title")));
@property (readonly) MealzcoreI18n *tryAnotherSearch __attribute__((swift_name("tryAnotherSearch")));
@property (readonly) MealzcoreI18n *tryWithOtherFilter __attribute__((swift_name("tryWithOtherFilter")));
@property (readonly) MealzcoreI18n *tryWithOtherFilterOrPreferences __attribute__((swift_name("tryWithOtherFilterOrPreferences")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Counter")))
@interface MealzcoreLocalisationCounter : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)counter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationCounter *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *persons __attribute__((swift_name("persons")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Error")))
@interface MealzcoreLocalisationError : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationError *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *generic __attribute__((swift_name("generic")));
@property (readonly) MealzcoreI18n *retry __attribute__((swift_name("retry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Favorites")))
@interface MealzcoreLocalisationFavorites : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)favorites __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationFavorites *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *goToCatalog __attribute__((swift_name("goToCatalog")));
@property (readonly) MealzcoreI18n *noFavorites __attribute__((swift_name("noFavorites")));
@property (readonly) MealzcoreI18n *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Filters")))
@interface MealzcoreLocalisationFilters : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)filters __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationFilters *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *betweenFiveAndTenEuros __attribute__((swift_name("betweenFiveAndTenEuros")));
@property (readonly) MealzcoreI18n *lessThanAnHour __attribute__((swift_name("lessThanAnHour")));
@property (readonly) MealzcoreI18n *lessThanFifteenMinutes __attribute__((swift_name("lessThanFifteenMinutes")));
@property (readonly) MealzcoreI18n *lessThanFiveEuros __attribute__((swift_name("lessThanFiveEuros")));
@property (readonly) MealzcoreI18n *lessThanThirteenMinutes __attribute__((swift_name("lessThanThirteenMinutes")));
@property (readonly) MealzcoreI18n *lessThanTwoHours __attribute__((swift_name("lessThanTwoHours")));
@property (readonly) MealzcoreI18n *moreThanTenEuros __attribute__((swift_name("moreThanTenEuros")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Ingredient")))
@interface MealzcoreLocalisationIngredient : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationIngredient *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)addProductNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("addProduct(numberOfProducts:)")));
- (MealzcoreI18n *)productAddedNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("productAdded(numberOfProducts:)")));
- (MealzcoreI18n *)productsSharedRecipeNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("productsSharedRecipe(numberOfProducts:)")));
@property (readonly) MealzcoreI18n *chooseProduct __attribute__((swift_name("chooseProduct")));
@property (readonly) MealzcoreI18n *ignoreProduct __attribute__((swift_name("ignoreProduct")));
@property (readonly) MealzcoreI18n *notAvailable __attribute__((swift_name("notAvailable")));
@property (readonly) MealzcoreI18n *willNotBeAdded __attribute__((swift_name("willNotBeAdded")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.ItemSelector")))
@interface MealzcoreLocalisationItemSelector : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationItemSelector *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *add __attribute__((swift_name("add")));
@property (readonly) MealzcoreI18n *emptyCta __attribute__((swift_name("emptyCta")));
@property (readonly) MealzcoreI18n *emptyTitle __attribute__((swift_name("emptyTitle")));
@property (readonly) MealzcoreI18n *headerTitle __attribute__((swift_name("headerTitle")));
@property (readonly) MealzcoreI18n *inBasket __attribute__((swift_name("inBasket")));
@property (readonly) MealzcoreI18n *noSubstitution __attribute__((swift_name("noSubstitution")));
@property (readonly) MealzcoreI18n *notFoundSubtitle __attribute__((swift_name("notFoundSubtitle")));
@property (readonly) MealzcoreI18n *notFoundTitle __attribute__((swift_name("notFoundTitle")));
@property (readonly) MealzcoreI18n *search __attribute__((swift_name("search")));
@property (readonly) MealzcoreI18n *select __attribute__((swift_name("select")));
@property (readonly) MealzcoreI18n *selected __attribute__((swift_name("selected")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.MyBasket")))
@interface MealzcoreLocalisationMyBasket : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myBasket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationMyBasket *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *products __attribute__((swift_name("products")));
@property (readonly) MealzcoreI18n *recipes __attribute__((swift_name("recipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.MyMeals")))
@interface MealzcoreLocalisationMyMeals : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myMeals __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationMyMeals *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)mealsAddedNumberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("mealsAdded(numberOfMeals:)")));
- (MealzcoreI18n *)mealsInBasketNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("mealsInBasket(numberOfProducts:)")));
- (MealzcoreI18n *)perPersonPrice:(NSString *)price __attribute__((swift_name("perPerson(price:)")));
- (MealzcoreI18n *)productsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("products(numberOfProducts:)")));
@property (readonly) MealzcoreI18n *goToCatalog __attribute__((swift_name("goToCatalog")));
@property (readonly) MealzcoreI18n *noMealIdeaInBasket __attribute__((swift_name("noMealIdeaInBasket")));
@property (readonly) MealzcoreI18n *perPerson __attribute__((swift_name("perPerson")));
@property (readonly) MealzcoreI18n *products __attribute__((swift_name("products")));
@property (readonly) MealzcoreI18n *seeProducts __attribute__((swift_name("seeProducts")));
@property (readonly) MealzcoreI18n *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Preferences")))
@interface MealzcoreLocalisationPreferences : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferences __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationPreferences *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *addTag __attribute__((swift_name("addTag")));
@property (readonly) MealzcoreI18n *cancel __attribute__((swift_name("cancel")));
@property (readonly) MealzcoreI18n *cookingEquipmentSubtitle __attribute__((swift_name("cookingEquipmentSubtitle")));
@property (readonly) MealzcoreI18n *cookingEquipmentTitle __attribute__((swift_name("cookingEquipmentTitle")));
@property (readonly) MealzcoreI18n *dietSubtitle __attribute__((swift_name("dietSubtitle")));
@property (readonly) MealzcoreI18n *dietTitle __attribute__((swift_name("dietTitle")));
@property (readonly) MealzcoreI18n *emptyTitle __attribute__((swift_name("emptyTitle")));
@property (readonly) MealzcoreI18n *numberOfGuests __attribute__((swift_name("numberOfGuests")));
@property (readonly) MealzcoreI18n *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@property (readonly) MealzcoreI18n *searchTitle __attribute__((swift_name("searchTitle")));
@property (readonly) MealzcoreI18n *tastesSubtitle __attribute__((swift_name("tastesSubtitle")));
@property (readonly) MealzcoreI18n *tastesTitle __attribute__((swift_name("tastesTitle")));
@property (readonly) MealzcoreI18n *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Price")))
@interface MealzcoreLocalisationPrice : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)price __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationPrice *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)mealCostCost:(NSString *)cost __attribute__((swift_name("mealCost(cost:)")));
@property (readonly) MealzcoreI18n *currency __attribute__((swift_name("currency")));
@property (readonly) MealzcoreI18n *perGuest __attribute__((swift_name("perGuest")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Recipe")))
@interface MealzcoreLocalisationRecipe : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationRecipe *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)numberOfIngredientsNumberOfIngredients:(int32_t)numberOfIngredients __attribute__((swift_name("numberOfIngredients(numberOfIngredients:)")));
@property (readonly) MealzcoreI18n *add __attribute__((swift_name("add")));
@property (readonly) MealzcoreI18n *addProducts __attribute__((swift_name("addProducts")));
@property (readonly) MealzcoreI18n *added __attribute__((swift_name("added")));
@property (readonly) MealzcoreI18n *cookTime __attribute__((swift_name("cookTime")));
@property (readonly) MealzcoreI18n *flag __attribute__((swift_name("flag")));
@property (readonly) MealzcoreI18n *highDifficulty __attribute__((swift_name("highDifficulty")));
@property (readonly) MealzcoreI18n *lowDifficulty __attribute__((swift_name("lowDifficulty")));
@property (readonly) MealzcoreI18n *mediumDifficulty __attribute__((swift_name("mediumDifficulty")));
@property (readonly) MealzcoreI18n *perPerson __attribute__((swift_name("perPerson")));
@property (readonly) MealzcoreI18n *preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) MealzcoreI18n *restingTime __attribute__((swift_name("restingTime")));
@property (readonly) MealzcoreI18n *showBasketPreview __attribute__((swift_name("showBasketPreview")));
@property (readonly) MealzcoreI18n *showDetails __attribute__((swift_name("showDetails")));
@property (readonly) MealzcoreI18n *steps __attribute__((swift_name("steps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.RecipeDetails")))
@interface MealzcoreLocalisationRecipeDetails : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeDetails __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationRecipeDetails *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)stepsNumberOfSteps:(int32_t)numberOfSteps __attribute__((swift_name("steps(numberOfSteps:)")));
@property (readonly) MealzcoreI18n *addAllProducts __attribute__((swift_name("addAllProducts")));
@property (readonly) MealzcoreI18n *continueShopping __attribute__((swift_name("continueShopping")));
@property (readonly) MealzcoreI18n *cooking __attribute__((swift_name("cooking")));
@property (readonly) MealzcoreI18n *inMyBasket __attribute__((swift_name("inMyBasket")));
@property (readonly) MealzcoreI18n *legal __attribute__((swift_name("legal")));
@property (readonly) MealzcoreI18n *oftenDeleted __attribute__((swift_name("oftenDeleted")));
@property (readonly) MealzcoreI18n *prevention __attribute__((swift_name("prevention")));
@property (readonly) MealzcoreI18n *seeMore __attribute__((swift_name("seeMore")));
@property (readonly) MealzcoreI18n *shopping __attribute__((swift_name("shopping")));
@property (readonly) MealzcoreI18n *unavailable __attribute__((swift_name("unavailable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.SponsorBanner")))
@interface MealzcoreLocalisationSponsorBanner : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBanner __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationSponsorBanner *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *sponsorBannerMoreInfo __attribute__((swift_name("sponsorBannerMoreInfo")));
@property (readonly) MealzcoreI18n *sponsorBannerSpeach __attribute__((swift_name("sponsorBannerSpeach")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.SponsorDetail")))
@interface MealzcoreLocalisationSponsorDetail : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorDetail __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationSponsorDetail *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *emptyCta __attribute__((swift_name("emptyCta")));
@property (readonly) MealzcoreI18n *emptySubtitle __attribute__((swift_name("emptySubtitle")));
@property (readonly) MealzcoreI18n *emptyTitle __attribute__((swift_name("emptyTitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Tag")))
@interface MealzcoreLocalisationTag : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tag __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreLocalisationTag *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreI18n *postRecipeCount __attribute__((swift_name("postRecipeCount")));
@property (readonly) MealzcoreI18n *preRecipeCount __attribute__((swift_name("preRecipeCount")));
@end

__attribute__((swift_name("I18nResource")))
@protocol MealzcoreI18nResource
@required
@property (readonly) NSString *accessibilityKey __attribute__((swift_name("accessibilityKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18n")))
@interface MealzcoreI18n : MealzcoreBase <MealzcoreI18nResource>
- (instancetype)initWithAccessibilityKey:(NSString *)accessibilityKey localised:(NSString *)localised __attribute__((swift_name("init(accessibilityKey:localised:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreI18nCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreI18n *)doCopyAccessibilityKey:(NSString *)accessibilityKey localised:(NSString *)localised __attribute__((swift_name("doCopy(accessibilityKey:localised:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessibilityKey __attribute__((swift_name("accessibilityKey")));
@property (readonly) NSString *localised __attribute__((swift_name("localised")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18n.Companion")))
@interface MealzcoreI18nCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreI18nCompanion *shared __attribute__((swift_name("shared")));
- (MealzcoreI18n *)empty __attribute__((swift_name("empty()")));
- (MealzcoreI18n *)pluralAccessibilityKey:(NSString *)accessibilityKey res:(MealzcoreResourcesPluralsResource * _Nullable)res quantity:(int32_t)quantity args:(MealzcoreKotlinArray<id> *)args __attribute__((swift_name("plural(accessibilityKey:res:quantity:args:)")));
- (MealzcoreI18n *)stringAccessibilityKey:(NSString *)accessibilityKey res:(MealzcoreResourcesStringResource * _Nullable)res args:(MealzcoreKotlinArray<id> *)args __attribute__((swift_name("string(accessibilityKey:res:args:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MealzcoreKotlinThrowable : MealzcoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoResourceThrowable")))
@interface MealzcoreNoResourceThrowable : MealzcoreKotlinThrowable
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)noResourceThrowable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreNoResourceThrowable *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticEvent")))
@interface MealzcoreAnalyticEvent : MealzcoreBase
- (instancetype)initWithEventType:(NSString *)eventType path:(NSString *)path props:(MealzcoreAnalyticsPlausibleProps *)props __attribute__((swift_name("init(eventType:path:props:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAnalyticsPlausibleProps *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAnalyticEvent *)doCopyEventType:(NSString *)eventType path:(NSString *)path props:(MealzcoreAnalyticsPlausibleProps *)props __attribute__((swift_name("doCopy(eventType:path:props:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) MealzcoreAnalyticsPlausibleProps *props __attribute__((swift_name("props")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics")))
@interface MealzcoreAnalytics : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreAnalyticsCompanion *companion __attribute__((swift_name("companion")));
- (void)doInitSupplierOrigin:(NSString *)supplierOrigin __attribute__((swift_name("doInit(supplierOrigin:)")));
- (void)sendEventEventType:(NSString *)eventType path:(NSString *)path props:(MealzcoreAnalyticsPlausibleProps *)props __attribute__((swift_name("sendEvent(eventType:path:props:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> domain __attribute__((swift_name("domain")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.Companion")))
@interface MealzcoreAnalyticsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAnalyticsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *EVENT_BASKET_CONFIRMED __attribute__((swift_name("EVENT_BASKET_CONFIRMED")));
@property (readonly) NSString *EVENT_CATEGORY_SHOW __attribute__((swift_name("EVENT_CATEGORY_SHOW")));
@property (readonly) NSString *EVENT_ENTRY_ADD __attribute__((swift_name("EVENT_ENTRY_ADD")));
@property (readonly) NSString *EVENT_ENTRY_CHANGE_QUANTITY __attribute__((swift_name("EVENT_ENTRY_CHANGE_QUANTITY")));
@property (readonly) NSString *EVENT_ENTRY_DELETE __attribute__((swift_name("EVENT_ENTRY_DELETE")));
@property (readonly) NSString *EVENT_ENTRY_REPLACE __attribute__((swift_name("EVENT_ENTRY_REPLACE")));
@property (readonly) NSString *EVENT_PAGEVIEW __attribute__((swift_name("EVENT_PAGEVIEW")));
@property (readonly) NSString *EVENT_PAYMENT_CONFIRMED __attribute__((swift_name("EVENT_PAYMENT_CONFIRMED")));
@property (readonly) NSString *EVENT_PAYMENT_STARTED __attribute__((swift_name("EVENT_PAYMENT_STARTED")));
@property (readonly) NSString *EVENT_PERSONAL_RECIPE_CREATE __attribute__((swift_name("EVENT_PERSONAL_RECIPE_CREATE")));
@property (readonly) NSString *EVENT_PERSONAL_RECIPE_DELETE __attribute__((swift_name("EVENT_PERSONAL_RECIPE_DELETE")));
@property (readonly) NSString *EVENT_PLANNER_CLOSE __attribute__((swift_name("EVENT_PLANNER_CLOSE")));
@property (readonly) NSString *EVENT_PLANNER_CONFIRM __attribute__((swift_name("EVENT_PLANNER_CONFIRM")));
@property (readonly) NSString *EVENT_PLANNER_SEARCH __attribute__((swift_name("EVENT_PLANNER_SEARCH")));
@property (readonly) NSString *EVENT_PREFERENCE_SELECTED __attribute__((swift_name("EVENT_PREFERENCE_SELECTED")));
@property (readonly) NSString *EVENT_RECIPE_ADD __attribute__((swift_name("EVENT_RECIPE_ADD")));
@property (readonly) NSString *EVENT_RECIPE_CHANGEGUESTS __attribute__((swift_name("EVENT_RECIPE_CHANGEGUESTS")));
@property (readonly) NSString *EVENT_RECIPE_DISPLAY __attribute__((swift_name("EVENT_RECIPE_DISPLAY")));
@property (readonly) NSString *EVENT_RECIPE_LIKE __attribute__((swift_name("EVENT_RECIPE_LIKE")));
@property (readonly) NSString *EVENT_RECIPE_PRINT __attribute__((swift_name("EVENT_RECIPE_PRINT")));
@property (readonly) NSString *EVENT_RECIPE_REMOVE __attribute__((swift_name("EVENT_RECIPE_REMOVE")));
@property (readonly) NSString *EVENT_RECIPE_RESET __attribute__((swift_name("EVENT_RECIPE_RESET")));
@property (readonly) NSString *EVENT_RECIPE_SHOW __attribute__((swift_name("EVENT_RECIPE_SHOW")));
@property (readonly) NSString *EVENT_RECIPE_UNLIKE __attribute__((swift_name("EVENT_RECIPE_UNLIKE")));
@property (readonly) NSString *EVENT_SEARCH __attribute__((swift_name("EVENT_SEARCH")));
@property (readonly) NSString *PLAUSIBLE_URL __attribute__((swift_name("PLAUSIBLE_URL")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleEvent")))
@interface MealzcoreAnalyticsPlausibleEvent : MealzcoreBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url domain:(NSString *)domain props:(MealzcoreAnalyticsPlausibleProps *)props version:(NSString *)version device:(NSString *)device __attribute__((swift_name("init(name:url:domain:props:version:device:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreAnalyticsPlausibleEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAnalyticsPlausibleProps *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAnalyticsPlausibleEvent *)doCopyName:(NSString *)name url:(NSString *)url domain:(NSString *)domain props:(MealzcoreAnalyticsPlausibleProps *)props version:(NSString *)version device:(NSString *)device __attribute__((swift_name("doCopy(name:url:domain:props:version:device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *device __attribute__((swift_name("device")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MealzcoreAnalyticsPlausibleProps *props __attribute__((swift_name("props")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleEventCompanion")))
@interface MealzcoreAnalyticsPlausibleEventCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAnalyticsPlausibleEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePaths")))
@interface MealzcoreAnalyticsPlausiblePaths : MealzcoreKotlinEnum<MealzcoreAnalyticsPlausiblePaths *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MealzcoreAnalyticsPlausiblePathsCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MealzcoreAnalyticsPlausiblePaths *recipeMealPlanner __attribute__((swift_name("recipeMealPlanner")));
@property (class, readonly) MealzcoreAnalyticsPlausiblePaths *recipeMealPlannerResult __attribute__((swift_name("recipeMealPlannerResult")));
@property (class, readonly) MealzcoreAnalyticsPlausiblePaths *recipeMealPlannerCatalog __attribute__((swift_name("recipeMealPlannerCatalog")));
@property (class, readonly) MealzcoreAnalyticsPlausiblePaths *recipeMealPlannerBasketPreview __attribute__((swift_name("recipeMealPlannerBasketPreview")));
@property (class, readonly) MealzcoreAnalyticsPlausiblePaths *recipeMealPlannerConfirmation __attribute__((swift_name("recipeMealPlannerConfirmation")));
+ (MealzcoreKotlinArray<MealzcoreAnalyticsPlausiblePaths *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePathsCompanion")))
@interface MealzcoreAnalyticsPlausiblePathsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAnalyticsPlausiblePathsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleProps")))
@interface MealzcoreAnalyticsPlausibleProps : MealzcoreBase
- (instancetype)initWithRecipe_id:(NSString * _Nullable)recipe_id category_id:(NSString * _Nullable)category_id entry_name:(NSString * _Nullable)entry_name basket_id:(NSString * _Nullable)basket_id miam_amount:(MealzcoreFloat * _Nullable)miam_amount total_amount:(NSString * _Nullable)total_amount pos_id:(NSString * _Nullable)pos_id pos_total_amount:(NSString * _Nullable)pos_total_amount pos_name:(NSString * _Nullable)pos_name search_term:(NSString * _Nullable)search_term uses_count:(NSString * _Nullable)uses_count time_passed:(NSString * _Nullable)time_passed budget_user:(NSString * _Nullable)budget_user budget_planner:(NSString * _Nullable)budget_planner recipe_count:(NSString * _Nullable)recipe_count query:(NSString * _Nullable)query guests:(NSString * _Nullable)guests item_id:(NSString * _Nullable)item_id item_ean:(NSString * _Nullable)item_ean user_preference:(NSString * _Nullable)user_preference old_item_id:(NSString * _Nullable)old_item_id old_item_ean:(NSString * _Nullable)old_item_ean new_item_id:(NSString * _Nullable)new_item_id new_item_ean:(NSString * _Nullable)new_item_ean recipe_item_id:(NSString * _Nullable)recipe_item_id diff:(NSString * _Nullable)diff from_miam:(MealzcoreBoolean * _Nullable)from_miam __attribute__((swift_name("init(recipe_id:category_id:entry_name:basket_id:miam_amount:total_amount:pos_id:pos_total_amount:pos_name:search_term:uses_count:time_passed:budget_user:budget_planner:recipe_count:query:guests:item_id:item_ean:user_preference:old_item_id:old_item_ean:new_item_id:new_item_ean:recipe_item_id:diff:from_miam:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreAnalyticsPlausiblePropsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBoolean * _Nullable)component27 __attribute__((swift_name("component27()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFloat * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAnalyticsPlausibleProps *)doCopyRecipe_id:(NSString * _Nullable)recipe_id category_id:(NSString * _Nullable)category_id entry_name:(NSString * _Nullable)entry_name basket_id:(NSString * _Nullable)basket_id miam_amount:(MealzcoreFloat * _Nullable)miam_amount total_amount:(NSString * _Nullable)total_amount pos_id:(NSString * _Nullable)pos_id pos_total_amount:(NSString * _Nullable)pos_total_amount pos_name:(NSString * _Nullable)pos_name search_term:(NSString * _Nullable)search_term uses_count:(NSString * _Nullable)uses_count time_passed:(NSString * _Nullable)time_passed budget_user:(NSString * _Nullable)budget_user budget_planner:(NSString * _Nullable)budget_planner recipe_count:(NSString * _Nullable)recipe_count query:(NSString * _Nullable)query guests:(NSString * _Nullable)guests item_id:(NSString * _Nullable)item_id item_ean:(NSString * _Nullable)item_ean user_preference:(NSString * _Nullable)user_preference old_item_id:(NSString * _Nullable)old_item_id old_item_ean:(NSString * _Nullable)old_item_ean new_item_id:(NSString * _Nullable)new_item_id new_item_ean:(NSString * _Nullable)new_item_ean recipe_item_id:(NSString * _Nullable)recipe_item_id diff:(NSString * _Nullable)diff from_miam:(MealzcoreBoolean * _Nullable)from_miam __attribute__((swift_name("doCopy(recipe_id:category_id:entry_name:basket_id:miam_amount:total_amount:pos_id:pos_total_amount:pos_name:search_term:uses_count:time_passed:budget_user:budget_planner:recipe_count:query:guests:item_id:item_ean:user_preference:old_item_id:old_item_ean:new_item_id:new_item_ean:recipe_item_id:diff:from_miam:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable basket_id __attribute__((swift_name("basket_id")));
@property (readonly) NSString * _Nullable budget_planner __attribute__((swift_name("budget_planner")));
@property (readonly) NSString * _Nullable budget_user __attribute__((swift_name("budget_user")));
@property (readonly) NSString * _Nullable category_id __attribute__((swift_name("category_id")));
@property (readonly) NSString * _Nullable diff __attribute__((swift_name("diff")));
@property (readonly) NSString * _Nullable entry_name __attribute__((swift_name("entry_name")));
@property (readonly) MealzcoreBoolean * _Nullable from_miam __attribute__((swift_name("from_miam")));
@property (readonly) NSString * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) NSString * _Nullable item_ean __attribute__((swift_name("item_ean")));
@property (readonly) NSString * _Nullable item_id __attribute__((swift_name("item_id")));
@property (readonly) MealzcoreFloat * _Nullable miam_amount __attribute__((swift_name("miam_amount")));
@property (readonly, getter=doNew_item_ean) NSString * _Nullable new_item_ean __attribute__((swift_name("new_item_ean")));
@property (readonly, getter=doNew_item_id) NSString * _Nullable new_item_id __attribute__((swift_name("new_item_id")));
@property (readonly) NSString * _Nullable old_item_ean __attribute__((swift_name("old_item_ean")));
@property (readonly) NSString * _Nullable old_item_id __attribute__((swift_name("old_item_id")));
@property (readonly) NSString * _Nullable pos_id __attribute__((swift_name("pos_id")));
@property (readonly) NSString * _Nullable pos_name __attribute__((swift_name("pos_name")));
@property (readonly) NSString * _Nullable pos_total_amount __attribute__((swift_name("pos_total_amount")));
@property (readonly) NSString * _Nullable query __attribute__((swift_name("query")));
@property (readonly) NSString * _Nullable recipe_count __attribute__((swift_name("recipe_count")));
@property (readonly) NSString * _Nullable recipe_id __attribute__((swift_name("recipe_id")));
@property (readonly) NSString * _Nullable recipe_item_id __attribute__((swift_name("recipe_item_id")));
@property (readonly) NSString * _Nullable search_term __attribute__((swift_name("search_term")));
@property (readonly) NSString * _Nullable time_passed __attribute__((swift_name("time_passed")));
@property (readonly) NSString * _Nullable total_amount __attribute__((swift_name("total_amount")));
@property (readonly) NSString * _Nullable user_preference __attribute__((swift_name("user_preference")));
@property (readonly) NSString * _Nullable uses_count __attribute__((swift_name("uses_count")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePropsCompanion")))
@interface MealzcoreAnalyticsPlausiblePropsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAnalyticsPlausiblePropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsInstance")))
@interface MealzcoreAnalyticsInstance : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analyticsInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAnalyticsInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreAnalytics *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("Route")))
@interface MealzcoreRoute : MealzcoreBase
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer));
- (void)onDialogBackRoute:(MealzcoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MealzcorePageRoute * _Nullable)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) MealzcoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogRoute")))
@interface MealzcoreDialogRoute : MealzcoreRoute
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("init(title:backToRoute:previous:closeDialog:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRoute * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDialogRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("doCopy(title:backToRoute:previous:closeDialog:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)onDialogBackRoute:(MealzcoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MealzcorePageRoute * _Nullable)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) void (^closeDialog)(void) __attribute__((swift_name("closeDialog")));
@property (readonly) MealzcoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageRoute")))
@interface MealzcorePageRoute : MealzcoreRoute
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRoute * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MealzcoreRoute * _Nullable)previous __attribute__((swift_name("doCopy(title:backToRoute:previous:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)onDialogBackRoute:(MealzcoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MealzcorePageRoute *)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) MealzcoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("RouteService")))
@interface MealzcoreRouteService : MealzcoreBase <MealzcoreStore, MealzcoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)dispatchAction:(MealzcoreRouteServiceAction *)action __attribute__((swift_name("dispatch(action:)")));
- (MealzcoreRoute * _Nullable)getCurrentRoute __attribute__((swift_name("getCurrentRoute()")));
- (void)onCloseDialog __attribute__((swift_name("onCloseDialog()")));
- (void)onRouteChangeUpdateRoute:(void (^)(MealzcoreRoute * _Nullable))updateRoute __attribute__((swift_name("onRouteChange(updateRoute:)")));
- (MealzcoreRoute * _Nullable)previous __attribute__((swift_name("previous()")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("RouteServiceAction")))
@interface MealzcoreRouteServiceAction : MealzcoreBase <MealzcoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetDialogRoute")))
@interface MealzcoreRouteServiceActionSetDialogRoute : MealzcoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("init(title:backToRoute:closeDialog:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouteServiceActionSetDialogRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("doCopy(title:backToRoute:closeDialog:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) void (^closeDialog)(void) __attribute__((swift_name("closeDialog")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetInitialPageRoute")))
@interface MealzcoreRouteServiceActionSetInitialPageRoute : MealzcoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("init(title:backToRoute:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouteServiceActionSetInitialPageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("doCopy(title:backToRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetPageRoute")))
@interface MealzcoreRouteServiceActionSetPageRoute : MealzcoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("init(title:backToRoute:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouteServiceActionSetPageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("doCopy(title:backToRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("RouteServiceEffect")))
@interface MealzcoreRouteServiceEffect : MealzcoreBase <MealzcoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceEffect.RouteChanged")))
@interface MealzcoreRouteServiceEffectRouteChanged : MealzcoreRouteServiceEffect
- (instancetype)initWithNewRoute:(MealzcoreRoute *)newRoute __attribute__((swift_name("init(newRoute:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRoute *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouteServiceEffectRouteChanged *)doCopyNewRoute:(MealzcoreRoute *)newRoute __attribute__((swift_name("doCopy(newRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewRoute) MealzcoreRoute *newRoute __attribute__((swift_name("newRoute")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceInstance")))
@interface MealzcoreRouteServiceInstance : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)routeServiceInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRouteServiceInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreRouteService *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceState")))
@interface MealzcoreRouteServiceState : MealzcoreBase <MealzcoreState>
- (instancetype)initWithRoute:(MealzcoreRoute * _Nullable)route __attribute__((swift_name("init(route:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRoute * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRouteServiceState *)doCopyRoute:(MealzcoreRoute * _Nullable)route __attribute__((swift_name("doCopy(route:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRoute * _Nullable route __attribute__((swift_name("route")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPreferences")))
@interface MealzcoreUserPreferences : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MealzcoreDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (MealzcoreInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (NSArray<NSString *> * _Nullable)getListOrNullKey:(NSString *)key __attribute__((swift_name("getListOrNull(key:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putListKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("putList(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPreferencesInstance")))
@interface MealzcoreUserPreferencesInstance : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userPreferencesInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreUserPreferencesInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MealzcoreUserPreferences *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlterQuantityBasketEntry")))
@interface MealzcoreAlterQuantityBasketEntry : MealzcoreBase
- (instancetype)initWithId:(NSString *)id deltaQty:(int32_t)deltaQty __attribute__((swift_name("init(id:deltaQty:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreAlterQuantityBasketEntry *)doCopyId:(NSString *)id deltaQty:(int32_t)deltaQty __attribute__((swift_name("doCopy(id:deltaQty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t deltaQty __attribute__((swift_name("deltaQty")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Attributes")))
@interface MealzcoreAttributes : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreAttributesCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attributes.Companion")))
@interface MealzcoreAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("AttributesField")))
@interface MealzcoreAttributesField : MealzcoreBase
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
- (NSString *)fieldsIncluded:(NSArray<NSString *> *)included __attribute__((swift_name("fields(included:)")));
@property (readonly) NSArray<NSString *> *defaultIncluded __attribute__((swift_name("defaultIncluded")));
@property (readonly) NSString *fieldParameterName __attribute__((swift_name("fieldParameterName")));
@property (readonly) NSString *includedRelationships __attribute__((swift_name("includedRelationships")));
@property (readonly) id<MealzcoreKotlinKClass> t __attribute__((swift_name("t")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Authorization")))
@interface MealzcoreAuthorization : MealzcoreKotlinEnum<MealzcoreAuthorization *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreAuthorization *bearer __attribute__((swift_name("bearer")));
@property (class, readonly) MealzcoreAuthorization *userId __attribute__((swift_name("userId")));
+ (MealzcoreKotlinArray<MealzcoreAuthorization *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Record")))
@interface MealzcoreRecord : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreRecordCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreKotlinx_serialization_jsonJsonElement *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@property (readonly) MealzcoreAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MealzcoreRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basket")))
@interface MealzcoreBasket : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreRecipe *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasket *)doCopyId:(NSString *)id attributes:(MealzcoreBasketAttributes * _Nullable)attributes relationships:(MealzcoreBasketRelationships * _Nullable)relationships recipes:(NSArray<MealzcoreRecipe *> *)recipes __attribute__((swift_name("doCopy(id:attributes:relationships:recipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)guestsForRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("guestsForRecipe(recipeId:)")));
- (BOOL)hasRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("hasRecipe(recipeId:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<NSString *> *)missingRecipesIdsExistingRecipes:(NSArray<MealzcoreRecipe *> *)existingRecipes __attribute__((swift_name("missingRecipesIds(existingRecipes:)")));
- (void)rebuildRecipesRelationshipsMissingRecipes:(NSArray<MealzcoreRecipe *> *)missingRecipes existingRecipes:(NSArray<MealzcoreRecipe *> *)existingRecipes __attribute__((swift_name("rebuildRecipesRelationships(missingRecipes:existingRecipes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreBasket *)updateBasketEntryNewBe:(MealzcoreBasketEntry *)newBe __attribute__((swift_name("updateBasketEntry(newBe:)")));
@property MealzcoreBasketAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property NSArray<MealzcoreRecipe *> *recipes __attribute__((swift_name("recipes")));
@property (readonly) MealzcoreBasketRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basket.Companion")))
@interface MealzcoreBasketCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSArray<NSString *> *defaultIncluded __attribute__((swift_name("defaultIncluded")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAttributes")))
@interface MealzcoreBasketAttributes : MealzcoreAttributes
- (instancetype)initWithRecipesInfos:(NSMutableArray<MealzcoreRecipeInfos *> *)recipesInfos confirmed:(MealzcoreBoolean * _Nullable)confirmed totalPrice:(float)totalPrice token:(NSString * _Nullable)token priceBookKey:(NSString * _Nullable)priceBookKey __attribute__((swift_name("init(recipesInfos:confirmed:totalPrice:token:priceBookKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<MealzcoreRecipeInfos *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBoolean * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketAttributes *)doCopyRecipesInfos:(NSMutableArray<MealzcoreRecipeInfos *> *)recipesInfos confirmed:(MealzcoreBoolean * _Nullable)confirmed totalPrice:(float)totalPrice token:(NSString * _Nullable)token priceBookKey:(NSString * _Nullable)priceBookKey __attribute__((swift_name("doCopy(recipesInfos:confirmed:totalPrice:token:priceBookKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreBoolean * _Nullable confirmed __attribute__((swift_name("confirmed")));
@property (readonly) NSString * _Nullable priceBookKey __attribute__((swift_name("priceBookKey")));
@property (readonly) NSMutableArray<MealzcoreRecipeInfos *> *recipesInfos __attribute__((swift_name("recipesInfos")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) float totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAttributes.Companion")))
@interface MealzcoreBasketAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntriesItem")))
@interface MealzcoreBasketEntriesItem : MealzcoreBase
- (instancetype)initWithId:(MealzcoreInt * _Nullable)id itemId:(MealzcoreInt * _Nullable)itemId score:(MealzcoreFloat * _Nullable)score learningFactor:(MealzcoreInt * _Nullable)learningFactor timesSelected:(MealzcoreInt * _Nullable)timesSelected selected:(BOOL)selected default:(BOOL)default_ unitPrice:(MealzcoreDouble * _Nullable)unitPrice currency:(NSString * _Nullable)currency pftPlages:(NSArray<MealzcoreInt *> * _Nullable)pftPlages pftChecksum:(NSString * _Nullable)pftChecksum __attribute__((swift_name("init(id:itemId:score:learningFactor:timesSelected:selected:default:unitPrice:currency:pftPlages:pftChecksum:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketEntriesItemCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreInt *> * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreFloat * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDouble * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntriesItem *)doCopyId:(MealzcoreInt * _Nullable)id itemId:(MealzcoreInt * _Nullable)itemId score:(MealzcoreFloat * _Nullable)score learningFactor:(MealzcoreInt * _Nullable)learningFactor timesSelected:(MealzcoreInt * _Nullable)timesSelected selected:(BOOL)selected default:(BOOL)default_ unitPrice:(MealzcoreDouble * _Nullable)unitPrice currency:(NSString * _Nullable)currency pftPlages:(NSArray<MealzcoreInt *> * _Nullable)pftPlages pftChecksum:(NSString * _Nullable)pftChecksum __attribute__((swift_name("doCopy(id:itemId:score:learningFactor:timesSelected:selected:default:unitPrice:currency:pftPlages:pftChecksum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly, getter=default) BOOL default_ __attribute__((swift_name("default_")));
@property (readonly) MealzcoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MealzcoreInt * _Nullable itemId __attribute__((swift_name("itemId")));
@property (readonly) MealzcoreInt * _Nullable learningFactor __attribute__((swift_name("learningFactor")));
@property (readonly) NSString * _Nullable pftChecksum __attribute__((swift_name("pftChecksum")));
@property (readonly) NSArray<MealzcoreInt *> * _Nullable pftPlages __attribute__((swift_name("pftPlages")));
@property (readonly) MealzcoreFloat * _Nullable score __attribute__((swift_name("score")));
@property (readonly) BOOL selected __attribute__((swift_name("selected")));
@property (readonly) MealzcoreInt * _Nullable timesSelected __attribute__((swift_name("timesSelected")));
@property (readonly) MealzcoreDouble * _Nullable unitPrice __attribute__((swift_name("unitPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntriesItem.Companion")))
@interface MealzcoreBasketEntriesItemCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntriesItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntry")))
@interface MealzcoreBasketEntry : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketEntryCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntryAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntryRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntry *)doCopyId:(NSString *)id attributes:(MealzcoreBasketEntryAttributes * _Nullable)attributes relationships:(MealzcoreBasketEntryRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isForRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("isForRecipe(recipeId:)")));
- (double)priceForItemItem:(MealzcoreItem *)item __attribute__((swift_name("priceForItem(item:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreBasketEntry *)updateQuantityQty:(int32_t)qty __attribute__((swift_name("updateQuantity(qty:)")));
- (MealzcoreBasketEntry *)updateSelectedItemSelectedItemId:(int32_t)selectedItemId __attribute__((swift_name("updateSelectedItem(selectedItemId:)")));
- (MealzcoreBasketEntry *)updateStatusStatus:(NSString *)status __attribute__((swift_name("updateStatus(status:)")));
@property (readonly) double absolutePrice __attribute__((swift_name("absolutePrice")));
@property (readonly) MealzcoreBasketEntryAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL canBeAdded __attribute__((swift_name("canBeAdded")));
@property (readonly) NSString *extId __attribute__((swift_name("extId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) BOOL isIgnored __attribute__((swift_name("isIgnored")));
@property (readonly) BOOL isInBasket __attribute__((swift_name("isInBasket")));
@property (readonly) BOOL isInitial __attribute__((swift_name("isInitial")));
@property (readonly) BOOL isOftenDeleted __attribute__((swift_name("isOftenDeleted")));
@property (readonly) BOOL isSubstitutable __attribute__((swift_name("isSubstitutable")));
@property (readonly) BOOL isUnavailable __attribute__((swift_name("isUnavailable")));
@property (readonly) int32_t itemsCountOrZero __attribute__((swift_name("itemsCountOrZero")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property BOOL needPatch __attribute__((swift_name("needPatch")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@property (readonly) int32_t recipeCount __attribute__((swift_name("recipeCount")));
@property (readonly) MealzcoreBasketEntryRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) MealzcoreBasketEntriesItem * _Nullable selectedBasketEntryItem __attribute__((swift_name("selectedBasketEntryItem")));
@property (readonly) MealzcoreItem * _Nullable selectedItem __attribute__((swift_name("selectedItem")));
@property (readonly) int32_t shareInRecipeCount __attribute__((swift_name("shareInRecipeCount")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) double unitPrice __attribute__((swift_name("unitPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntry.Companion")))
@interface MealzcoreBasketEntryCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntry.CompanionStates")))
@interface MealzcoreBasketEntryCompanionStates : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)states __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryCompanionStates *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ACTIVE __attribute__((swift_name("ACTIVE")));
@property (readonly) NSString *DELETED __attribute__((swift_name("DELETED")));
@property (readonly) NSString *IGNORED __attribute__((swift_name("IGNORED")));
@property (readonly) NSString *INITIAL __attribute__((swift_name("INITIAL")));
@property (readonly) NSString *OFTEN_DELETED __attribute__((swift_name("OFTEN_DELETED")));
@property (readonly) NSString *UNAVAILABLE __attribute__((swift_name("UNAVAILABLE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryAttributes")))
@interface MealzcoreBasketEntryAttributes : MealzcoreAttributes
- (instancetype)initWithSelectedItemId:(MealzcoreInt * _Nullable)selectedItemId quantity:(MealzcoreInt * _Nullable)quantity recipeIds:(NSArray<MealzcoreInt *> * _Nullable)recipeIds status:(NSString *)status basketEntriesItems:(NSArray<MealzcoreBasketEntriesItem *> * _Nullable)basketEntriesItems name:(NSString *)name __attribute__((swift_name("init(selectedItemId:quantity:recipeIds:status:basketEntriesItems:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketEntryAttributesCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreInt *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntriesItem *> * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntryAttributes *)doCopySelectedItemId:(MealzcoreInt * _Nullable)selectedItemId quantity:(MealzcoreInt * _Nullable)quantity recipeIds:(NSArray<MealzcoreInt *> * _Nullable)recipeIds status:(NSString *)status basketEntriesItems:(NSArray<MealzcoreBasketEntriesItem *> * _Nullable)basketEntriesItems name:(NSString *)name __attribute__((swift_name("doCopy(selectedItemId:quantity:recipeIds:status:basketEntriesItems:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<MealzcoreBasketEntriesItem *> * _Nullable basketEntriesItems __attribute__((swift_name("basketEntriesItems")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MealzcoreInt * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSArray<MealzcoreInt *> * _Nullable recipeIds __attribute__((swift_name("recipeIds")));
@property (readonly) MealzcoreInt * _Nullable selectedItemId __attribute__((swift_name("selectedItemId")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryAttributes.Companion")))
@interface MealzcoreBasketEntryAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("RelationshipList")))
@interface MealzcoreRelationshipList : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MealzcoreRecord *> *)buildedFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords subClass:(id<MealzcoreKotlinKClass>)subClass __attribute__((swift_name("buildedFromIncluded(includedRecords:subClass:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder __attribute__((swift_name("serialize(encoder:)")));
@property (readonly) NSArray<MealzcoreRecord *> *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/BasketEntryRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipList")))
@interface MealzcoreBasketEntryRelationshipList : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreBasketEntry *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketEntryRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreBasketEntry *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipList.Companion")))
@interface MealzcoreBasketEntryRelationshipListCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MealzcoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MealzcoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MealzcoreKotlinx_serialization_coreKSerializer <MealzcoreKotlinx_serialization_coreSerializationStrategy, MealzcoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/BasketEntryRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipListSerializer")))
@interface MealzcoreBasketEntryRelationshipListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketEntryRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreBasketEntryRelationshipList *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreBasketEntryRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Relationships")))
@interface MealzcoreRelationships : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationships")))
@interface MealzcoreBasketEntryRelationships : MealzcoreRelationships
- (instancetype)initWithItems:(MealzcoreItemRelationshipList * _Nullable)items selectedItem:(MealzcoreItemRelationship * _Nullable)selectedItem __attribute__((swift_name("init(items:selectedItem:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketEntryRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MealzcoreItemRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemRelationship * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketEntryRelationships *)doCopyItems:(MealzcoreItemRelationshipList * _Nullable)items selectedItem:(MealzcoreItemRelationship * _Nullable)selectedItem __attribute__((swift_name("doCopy(items:selectedItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreItemRelationshipList * _Nullable items __attribute__((swift_name("items")));
@property MealzcoreItemRelationship * _Nullable selectedItem __attribute__((swift_name("selectedItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationships.Companion")))
@interface MealzcoreBasketEntryRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketEntryRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewInfo")))
@interface MealzcoreBasketPreviewInfo : MealzcoreBase
- (instancetype)initWithRecipe:(MealzcoreRecipe *)recipe foundEntries:(NSArray<MealzcoreBasketEntry *> *)foundEntries notFoundEntries:(NSArray<MealzcoreBasketEntry *> *)notFoundEntries oftenDeletedEntries:(NSArray<MealzcoreBasketEntry *> *)oftenDeletedEntries removedEntries:(NSArray<MealzcoreBasketEntry *> *)removedEntries __attribute__((swift_name("init(recipe:foundEntries:notFoundEntries:oftenDeletedEntries:removedEntries:)"))) __attribute__((objc_designated_initializer));
- (MealzcoreRecipe *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntry *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntry *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntry *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MealzcoreBasketEntry *> *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketPreviewInfo *)doCopyRecipe:(MealzcoreRecipe *)recipe foundEntries:(NSArray<MealzcoreBasketEntry *> *)foundEntries notFoundEntries:(NSArray<MealzcoreBasketEntry *> *)notFoundEntries oftenDeletedEntries:(NSArray<MealzcoreBasketEntry *> *)oftenDeletedEntries removedEntries:(NSArray<MealzcoreBasketEntry *> *)removedEntries __attribute__((swift_name("doCopy(recipe:foundEntries:notFoundEntries:oftenDeletedEntries:removedEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *foundEntries __attribute__((swift_name("foundEntries")));
@property (readonly) int32_t foundEntriesCount __attribute__((swift_name("foundEntriesCount")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *notFoundEntries __attribute__((swift_name("notFoundEntries")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *oftenDeletedEntries __attribute__((swift_name("oftenDeletedEntries")));
@property (readonly) MealzcoreRecipe *recipe __attribute__((swift_name("recipe")));
@property (readonly) NSArray<MealzcoreBasketEntry *> *removedEntries __attribute__((swift_name("removedEntries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketRelationships")))
@interface MealzcoreBasketRelationships : MealzcoreRelationships
- (instancetype)initWithBasketEntries:(MealzcoreBasketEntryRelationshipList * _Nullable)basketEntries __attribute__((swift_name("init(basketEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreBasketRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MealzcoreBasketEntryRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreBasketRelationships *)doCopyBasketEntries:(MealzcoreBasketEntryRelationshipList * _Nullable)basketEntries __attribute__((swift_name("doCopy(basketEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreBasketEntryRelationshipList * _Nullable basketEntries __attribute__((swift_name("basketEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketRelationships.Companion")))
@interface MealzcoreBasketRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CatalogCategory")))
@interface MealzcoreCatalogCategory : MealzcoreBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogFilterOptions")))
@interface MealzcoreCatalogFilterOptions : MealzcoreBase
- (instancetype)initWithName:(NSString *)name uiLabel:(NSString *)uiLabel isSelected:(BOOL)isSelected __attribute__((swift_name("init(name:uiLabel:isSelected:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreCatalogFilterOptions *)doCopyName:(NSString *)name uiLabel:(NSString *)uiLabel isSelected:(BOOL)isSelected __attribute__((swift_name("doCopy(name:uiLabel:isSelected:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MealzcoreCatalogFilterOptions *)off __attribute__((swift_name("off()")));
- (MealzcoreCatalogFilterOptions *)on __attribute__((swift_name("on()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreCatalogFilterOptions *)toogle __attribute__((swift_name("toogle()")));
@property BOOL isSelected __attribute__((swift_name("isSelected")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *uiLabel __attribute__((swift_name("uiLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckableTag")))
@interface MealzcoreCheckableTag : MealzcoreBase
- (instancetype)initWithTagType:(MealzcoreTagTypes *)tagType tag:(MealzcoreTag *)tag __attribute__((swift_name("init(tagType:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTagType:(MealzcoreTagTypes *)tagType tag:(MealzcoreTag *)tag isChecked:(BOOL)isChecked __attribute__((swift_name("init(tagType:tag:isChecked:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreCheckableTagCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreTagTypes *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTag *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreCheckableTag *)doCopyTagType:(MealzcoreTagTypes *)tagType tag:(MealzcoreTag *)tag isChecked:(BOOL)isChecked __attribute__((swift_name("doCopy(tagType:tag:isChecked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MealzcoreCheckableTag *)resetWithStorageTagIds:(NSArray<NSString *> *)storageTagIds __attribute__((swift_name("resetWith(storageTagIds:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreCheckableTag *)toggleIfNeededTagIdToToggle:(NSString *)tagIdToToggle __attribute__((swift_name("toggleIfNeeded(tagIdToToggle:)")));
@property (readonly) BOOL changedFromItsDefaultValue __attribute__((swift_name("changedFromItsDefaultValue")));
@property (readonly) BOOL isChecked __attribute__((swift_name("isChecked")));
@property (readonly) BOOL isIncludedInQuery __attribute__((swift_name("isIncludedInQuery")));
@property (readonly) MealzcoreTag *tag __attribute__((swift_name("tag")));
@property (readonly) MealzcoreTagTypes *tagType __attribute__((swift_name("tagType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckableTag.Companion")))
@interface MealzcoreCheckableTagCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreCheckableTagCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)checkedByDefaultTagType:(MealzcoreTagTypes *)tagType __attribute__((swift_name("checkedByDefault(tagType:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingredient")))
@interface MealzcoreIngredient : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreIngredientCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredientAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredientRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredient *)doCopyId:(NSString *)id attributes:(MealzcoreIngredientAttributes * _Nullable)attributes relationships:(MealzcoreIngredientRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)ingredientAttributesGuardCallbacks:(void (^)(NSString *, NSString *, NSString *, NSString *))callbacks __attribute__((swift_name("ingredientAttributesGuard(callbacks:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreIngredientAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isIgnored __attribute__((swift_name("isIgnored")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MealzcoreIngredientRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingredient.Companion")))
@interface MealzcoreIngredientCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientAttributes")))
@interface MealzcoreIngredientAttributes : MealzcoreAttributes
- (instancetype)initWithName:(NSString * _Nullable)name quantity:(NSString * _Nullable)quantity unit:(NSString * _Nullable)unit pictureUrl:(NSString * _Nullable)pictureUrl forcedEans:(NSArray<NSString *> *)forcedEans __attribute__((swift_name("init(name:quantity:unit:pictureUrl:forcedEans:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreIngredientAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreIngredientAttributes *)doCopyName:(NSString * _Nullable)name quantity:(NSString * _Nullable)quantity unit:(NSString * _Nullable)unit pictureUrl:(NSString * _Nullable)pictureUrl forcedEans:(NSArray<NSString *> *)forcedEans __attribute__((swift_name("doCopy(name:quantity:unit:pictureUrl:forcedEans:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *forcedEans __attribute__((swift_name("forcedEans")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable unit __attribute__((swift_name("unit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientAttributes.Companion")))
@interface MealzcoreIngredientAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/IngredientListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListRelationship")))
@interface MealzcoreIngredientListRelationship : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreIngredient *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreIngredientListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreIngredient *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListRelationship.Companion")))
@interface MealzcoreIngredientListRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/IngredientListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListSerializer")))
@interface MealzcoreIngredientListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredientListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreIngredientListRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreIngredientListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientRelationships")))
@interface MealzcoreIngredientRelationships : MealzcoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredientRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item")))
@interface MealzcoreItem : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItem *)doCopyId:(NSString *)id attributes:(MealzcoreItemAttributes * _Nullable)attributes relationships:(MealzcoreItemRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreItemAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *capacity __attribute__((swift_name("capacity")));
@property (readonly) NSString *capacityCombined __attribute__((swift_name("capacityCombined")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreItemRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item.Companion")))
@interface MealzcoreItemCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemAttributes")))
@interface MealzcoreItemAttributes : MealzcoreAttributes
- (instancetype)initWithExtId:(NSString * _Nullable)extId name:(NSString *)name itemDescription:(NSString * _Nullable)itemDescription brand:(NSString * _Nullable)brand image:(NSString * _Nullable)image unitPrice:(NSString * _Nullable)unitPrice capacityUnit:(NSString * _Nullable)capacityUnit capacityVolume:(NSString * _Nullable)capacityVolume capacityFactor:(MealzcoreInt * _Nullable)capacityFactor ean:(NSString *)ean variableCapacity:(BOOL)variableCapacity __attribute__((swift_name("init(extId:name:itemDescription:brand:image:unitPrice:capacityUnit:capacityVolume:capacityFactor:ean:variableCapacity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreItemAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreItemAttributes *)doCopyExtId:(NSString * _Nullable)extId name:(NSString *)name itemDescription:(NSString * _Nullable)itemDescription brand:(NSString * _Nullable)brand image:(NSString * _Nullable)image unitPrice:(NSString * _Nullable)unitPrice capacityUnit:(NSString * _Nullable)capacityUnit capacityVolume:(NSString * _Nullable)capacityVolume capacityFactor:(MealzcoreInt * _Nullable)capacityFactor ean:(NSString *)ean variableCapacity:(BOOL)variableCapacity __attribute__((swift_name("doCopy(extId:name:itemDescription:brand:image:unitPrice:capacityUnit:capacityVolume:capacityFactor:ean:variableCapacity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) MealzcoreInt * _Nullable capacityFactor __attribute__((swift_name("capacityFactor")));
@property (readonly) NSString * _Nullable capacityUnit __attribute__((swift_name("capacityUnit")));
@property (readonly) NSString * _Nullable capacityVolume __attribute__((swift_name("capacityVolume")));
@property (readonly) NSString *ean __attribute__((swift_name("ean")));
@property (readonly) NSString * _Nullable extId __attribute__((swift_name("extId")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable itemDescription __attribute__((swift_name("itemDescription")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable unitPrice __attribute__((swift_name("unitPrice")));
@property (readonly) BOOL variableCapacity __attribute__((swift_name("variableCapacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemAttributes.Companion")))
@interface MealzcoreItemAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Relationship")))
@interface MealzcoreRelationship : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreRecord *)buildedFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords subClass:(id<MealzcoreKotlinKClass>)subClass __attribute__((swift_name("buildedFromIncluded(includedRecords:subClass:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder __attribute__((swift_name("serialize(encoder:)")));
@property (readonly) MealzcoreRecord *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/ItemRelationshipSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationship")))
@interface MealzcoreItemRelationship : MealzcoreRelationship
- (instancetype)initWithData:(MealzcoreItem *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreItemRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecord:(NSArray<MealzcoreRecord *> *)includedRecord __attribute__((swift_name("buildFromIncluded(includedRecord:)")));
@property MealzcoreItem *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationship.Companion")))
@interface MealzcoreItemRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/ItemRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipList")))
@interface MealzcoreItemRelationshipList : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreItem *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreItemRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreItem *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipList.Companion")))
@interface MealzcoreItemRelationshipListCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/ItemRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipListSerializer")))
@interface MealzcoreItemRelationshipListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreItemRelationshipList *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreItemRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/ItemRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipSerializer")))
@interface MealzcoreItemRelationshipSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemRelationshipSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemRelationshipSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreItemRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreItemRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationships")))
@interface MealzcoreItemRelationships : MealzcoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreItemRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationships.Companion")))
@interface MealzcoreItemRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerRecipe")))
@interface MealzcoreMealPlannerRecipe : MealzcoreBase
- (instancetype)initWithRecipeId:(NSString *)recipeId price:(double)price __attribute__((swift_name("init(recipeId:price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMealPlannerRecipe *)doCopyRecipeId:(NSString *)recipeId price:(double)price __attribute__((swift_name("doCopy(recipeId:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamConfig")))
@interface MealzcoreMiamConfig : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreMiamConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreMiamConfig *)doCopySupplierId:(NSString *)supplierId plausibleDomain:(NSString *)plausibleDomain miamOrigin:(NSString *)miamOrigin origin:(NSString *)origin environment:(NSString *)environment __attribute__((swift_name("doCopy(supplierId:plausibleDomain:miamOrigin:origin:environment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *environment __attribute__((swift_name("environment")));
@property (readonly) NSString *miamOrigin __attribute__((swift_name("miamOrigin")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@property (readonly) NSString *plausibleDomain __attribute__((swift_name("plausibleDomain")));
@property (readonly) NSString *supplierId __attribute__((swift_name("supplierId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamConfig.Companion")))
@interface MealzcoreMiamConfigCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMiamConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Package")))
@interface MealzcorePackage : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePackageCompanion *companion __attribute__((swift_name("companion")));
- (MealzcorePackage *)buildRecipesRecipes:(NSArray<MealzcoreRecipe *> *)recipes __attribute__((swift_name("buildRecipes(recipes:)")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackage *)doCopyId:(NSString *)id attributes:(MealzcorePackageAttributes * _Nullable)attributes relationships:(MealzcorePackageRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcorePackageAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcorePackageRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Package.Companion")))
@interface MealzcorePackageCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePackageCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageAttributes")))
@interface MealzcorePackageAttributes : MealzcoreAttributes
- (instancetype)initWithTitle:(NSString *)title settings:(MealzcorePackageSettings *)settings __attribute__((swift_name("init(title:settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePackageAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageSettings *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageAttributes *)doCopyTitle:(NSString *)title settings:(MealzcorePackageSettings *)settings __attribute__((swift_name("doCopy(title:settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcorePackageSettings *settings __attribute__((swift_name("settings")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageAttributes.Companion")))
@interface MealzcorePackageAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePackageAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageRelationships")))
@interface MealzcorePackageRelationships : MealzcoreRelationships
- (instancetype)initWithRecipes:(MealzcoreRecipeRelationshipList * _Nullable)recipes __attribute__((swift_name("init(recipes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePackageRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MealzcoreRecipeRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageRelationships *)doCopyRecipes:(MealzcoreRecipeRelationshipList * _Nullable)recipes __attribute__((swift_name("doCopy(recipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreRecipeRelationshipList * _Nullable recipes __attribute__((swift_name("recipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageRelationships.Companion")))
@interface MealzcorePackageRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePackageRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageSettings")))
@interface MealzcorePackageSettings : MealzcoreBase
- (instancetype)initWithSubtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("init(subtitle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePackageSettingsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePackageSettings *)doCopySubtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("doCopy(subtitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageSettings.Companion")))
@interface MealzcorePackageSettingsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePackageSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSale")))
@interface MealzcorePointOfSale : MealzcoreBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePointOfSaleCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePointOfSale *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSale.Companion")))
@interface MealzcorePointOfSaleCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePointOfSaleCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleWrapper")))
@interface MealzcorePointOfSaleWrapper : MealzcoreBase
- (instancetype)initWithData:(MealzcorePointOfSale *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePointOfSaleWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MealzcorePointOfSale *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePointOfSaleWrapper *)doCopyData:(MealzcorePointOfSale *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcorePointOfSale *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleWrapper.Companion")))
@interface MealzcorePointOfSaleWrapperCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePointOfSaleWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSales")))
@interface MealzcorePointOfSales : MealzcoreBase
- (instancetype)initWithData:(NSArray<MealzcorePointOfSale *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePointOfSalesCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MealzcorePointOfSale *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePointOfSales *)doCopyData:(NSArray<MealzcorePointOfSale *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MealzcorePointOfSale *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSales.Companion")))
@interface MealzcorePointOfSalesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePointOfSalesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pricing")))
@interface MealzcorePricing : MealzcoreBase
- (instancetype)initWithPrice:(double)price serves:(int32_t)serves __attribute__((swift_name("init(price:serves:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcorePricingCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcorePricing *)doCopyPrice:(double)price serves:(int32_t)serves __attribute__((swift_name("doCopy(price:serves:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) double pricePerServe __attribute__((swift_name("pricePerServe")));
@property (readonly) int32_t serves __attribute__((swift_name("serves")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pricing.Companion")))
@interface MealzcorePricingCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePricingCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipe")))
@interface MealzcoreRecipe : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLike * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipe *)doCopyId:(NSString *)id attributes:(MealzcoreRecipeAttributes * _Nullable)attributes relationships:(MealzcoreRecipeRelationships * _Nullable)relationships recipeLike:(MealzcoreRecipeLike * _Nullable)recipeLike __attribute__((swift_name("doCopy(id:attributes:relationships:recipeLike:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRecipeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *cookingTimeIos __attribute__((swift_name("cookingTimeIos")));
@property (readonly) MealzcoreRecipeDifficulty *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) BOOL hasRelationships __attribute__((swift_name("hasRelationships")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isSponsored __attribute__((swift_name("isSponsored")));
@property (readonly) NSString *preparationTimeIos __attribute__((swift_name("preparationTimeIos")));
@property (readonly) MealzcoreRecipeLike * _Nullable recipeLike __attribute__((swift_name("recipeLike")));
@property (readonly) MealzcoreRecipeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) NSString *restingTimeIos __attribute__((swift_name("restingTimeIos")));
@property (readonly) NSArray<MealzcoreRecipeStep *> *sortedStep __attribute__((swift_name("sortedStep")));
@property (readonly) NSString *totalTime __attribute__((swift_name("totalTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipe.Companion")))
@interface MealzcoreRecipeCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeAttributes")))
@interface MealzcoreRecipeAttributes : MealzcoreAttributes
- (instancetype)initWithTitle:(NSString *)title recipeDescription:(NSString * _Nullable)recipeDescription numberOfGuests:(int32_t)numberOfGuests preparationTime:(id _Nullable)preparationTime cookingTime:(id _Nullable)cookingTime restingTime:(id _Nullable)restingTime computedCost:(MealzcoreDouble * _Nullable)computedCost mediaUrl:(NSString *)mediaUrl difficulty:(MealzcoreInt * _Nullable)difficulty price:(MealzcoreRecipePricing * _Nullable)price __attribute__((swift_name("init(title:recipeDescription:numberOfGuests:preparationTime:cookingTime:restingTime:computedCost:mediaUrl:difficulty:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipePricing * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreDouble * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeAttributes *)doCopyTitle:(NSString *)title recipeDescription:(NSString * _Nullable)recipeDescription numberOfGuests:(int32_t)numberOfGuests preparationTime:(id _Nullable)preparationTime cookingTime:(id _Nullable)cookingTime restingTime:(id _Nullable)restingTime computedCost:(MealzcoreDouble * _Nullable)computedCost mediaUrl:(NSString *)mediaUrl difficulty:(MealzcoreInt * _Nullable)difficulty price:(MealzcoreRecipePricing * _Nullable)price __attribute__((swift_name("doCopy(title:recipeDescription:numberOfGuests:preparationTime:cookingTime:restingTime:computedCost:mediaUrl:difficulty:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreDouble * _Nullable computedCost __attribute__((swift_name("computedCost")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable cookingTime __attribute__((swift_name("cookingTime")));
@property (readonly) MealzcoreInt * _Nullable difficulty __attribute__((swift_name("difficulty")));
@property (readonly) NSString *mediaUrl __attribute__((swift_name("mediaUrl")));
@property (readonly) int32_t numberOfGuests __attribute__((swift_name("numberOfGuests")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) MealzcoreRecipePricing * _Nullable price __attribute__((swift_name("price")));
@property (readonly) NSString * _Nullable recipeDescription __attribute__((swift_name("recipeDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable restingTime __attribute__((swift_name("restingTime")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeAttributes.Companion")))
@interface MealzcoreRecipeAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeDifficulty")))
@interface MealzcoreRecipeDifficulty : MealzcoreKotlinEnum<MealzcoreRecipeDifficulty *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreRecipeDifficulty *easy __attribute__((swift_name("easy")));
@property (class, readonly) MealzcoreRecipeDifficulty *medium __attribute__((swift_name("medium")));
@property (class, readonly) MealzcoreRecipeDifficulty *hard __attribute__((swift_name("hard")));
+ (MealzcoreKotlinArray<MealzcoreRecipeDifficulty *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeInfos")))
@interface MealzcoreRecipeInfos : MealzcoreBase
- (instancetype)initWithId:(int32_t)id guests:(int32_t)guests __attribute__((swift_name("init(id:guests:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeInfosCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeInfos *)doCopyId:(int32_t)id guests:(int32_t)guests __attribute__((swift_name("doCopy(id:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t guests __attribute__((swift_name("guests")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeInfos.Companion")))
@interface MealzcoreRecipeInfosCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeInfosCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLike")))
@interface MealzcoreRecipeLike : MealzcoreRecord
- (instancetype)initWithId:(NSString * _Nullable)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeLikeCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLikeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLikeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLike *)doCopyId:(NSString * _Nullable)id attributes:(MealzcoreRecipeLikeAttributes * _Nullable)attributes relationships:(MealzcoreRecipeLikeRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MealzcoreRecipeLike *)toggle __attribute__((swift_name("toggle()")));
@property (readonly) MealzcoreRecipeLikeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL exists __attribute__((swift_name("exists")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BOOL isLiked __attribute__((swift_name("isLiked")));
@property (readonly) MealzcoreRecipeLikeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLike.Companion")))
@interface MealzcoreRecipeLikeCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeLikeCompanion *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipeLike *)createDefaultRecipeId:(NSString *)recipeId __attribute__((swift_name("createDefault(recipeId:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeAttributes")))
@interface MealzcoreRecipeLikeAttributes : MealzcoreAttributes
- (instancetype)initWithIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("init(isPast:recipeId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeLikeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeLikeAttributes *)doCopyIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("doCopy(isPast:recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isPast __attribute__((swift_name("isPast")));
@property (readonly) int32_t recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeAttributes.Companion")))
@interface MealzcoreRecipeLikeAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeLikeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeRelationships")))
@interface MealzcoreRecipeLikeRelationships : MealzcoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreRecipeLikeRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeRelationships.Companion")))
@interface MealzcoreRecipeLikeRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeLikeRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePlan")))
@interface MealzcoreRecipePlan : MealzcoreBase
- (instancetype)initWithMaxRecipes:(int32_t)maxRecipes __attribute__((swift_name("init(maxRecipes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipePlanCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipePlan *)doCopyMaxRecipes:(int32_t)maxRecipes __attribute__((swift_name("doCopy(maxRecipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t maxRecipes __attribute__((swift_name("maxRecipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePlan.Companion")))
@interface MealzcoreRecipePlanCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipePlanCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePricing")))
@interface MealzcoreRecipePricing : MealzcoreBase
- (instancetype)initWithPrice:(double)price serves:(int32_t)serves pricePerServe:(double)pricePerServe __attribute__((swift_name("init(price:serves:pricePerServe:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipePricingCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipePricing *)doCopyPrice:(double)price serves:(int32_t)serves pricePerServe:(double)pricePerServe __attribute__((swift_name("doCopy(price:serves:pricePerServe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) double pricePerServe __attribute__((swift_name("pricePerServe")));
@property (readonly) int32_t serves __attribute__((swift_name("serves")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePricing.Companion")))
@interface MealzcoreRecipePricingCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipePricingCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/RecipeRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipList")))
@interface MealzcoreRecipeRelationshipList : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreRecipe *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreRecipe *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipList.Companion")))
@interface MealzcoreRecipeRelationshipListCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/RecipeRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipListSerializer")))
@interface MealzcoreRecipeRelationshipListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipeRelationshipList *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreRecipeRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationships")))
@interface MealzcoreRecipeRelationships : MealzcoreRelationships
- (instancetype)initWithIngredients:(MealzcoreIngredientListRelationship * _Nullable)ingredients sponsors:(MealzcoreSponsorListRelationship * _Nullable)sponsors recipeSteps:(MealzcoreRecipeStepListRelationship * _Nullable)recipeSteps tags:(MealzcoreTagListRelationship * _Nullable)tags __attribute__((swift_name("init(ingredients:sponsors:recipeSteps:tags:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MealzcoreIngredientListRelationship * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorListRelationship * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeStepListRelationship * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTagListRelationship * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeRelationships *)doCopyIngredients:(MealzcoreIngredientListRelationship * _Nullable)ingredients sponsors:(MealzcoreSponsorListRelationship * _Nullable)sponsors recipeSteps:(MealzcoreRecipeStepListRelationship * _Nullable)recipeSteps tags:(MealzcoreTagListRelationship * _Nullable)tags __attribute__((swift_name("doCopy(ingredients:sponsors:recipeSteps:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreIngredientListRelationship * _Nullable ingredients __attribute__((swift_name("ingredients")));
@property MealzcoreRecipeStepListRelationship * _Nullable recipeSteps __attribute__((swift_name("recipeSteps")));
@property MealzcoreSponsorListRelationship * _Nullable sponsors __attribute__((swift_name("sponsors")));
@property MealzcoreTagListRelationship * _Nullable tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationships.Companion")))
@interface MealzcoreRecipeRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStep")))
@interface MealzcoreRecipeStep : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeStepCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeStepAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeStepRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeStep *)doCopyId:(NSString *)id attributes:(MealzcoreRecipeStepAttributes * _Nullable)attributes relationships:(MealzcoreRecipeStepRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreRecipeStepAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreRecipeStepRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStep.Companion")))
@interface MealzcoreRecipeStepCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepAttributes")))
@interface MealzcoreRecipeStepAttributes : MealzcoreAttributes
- (instancetype)initWithStepNumber:(int32_t)stepNumber title:(NSString * _Nullable)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("init(stepNumber:title:stepDescription:mediaUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeStepAttributesCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecipeStepAttributes *)doCopyStepNumber:(int32_t)stepNumber title:(NSString * _Nullable)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("doCopy(stepNumber:title:stepDescription:mediaUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mediaUrl __attribute__((swift_name("mediaUrl")));
@property (readonly) NSString * _Nullable stepDescription __attribute__((swift_name("stepDescription")));
@property (readonly) int32_t stepNumber __attribute__((swift_name("stepNumber")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepAttributes.Companion")))
@interface MealzcoreRecipeStepAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/RecipeStepListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListListSerializer")))
@interface MealzcoreRecipeStepListListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeStepListListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepListListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipeStepListRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreRecipeStepListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/RecipeStepListListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListRelationship")))
@interface MealzcoreRecipeStepListRelationship : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreRecipeStep *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecipeStepListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreRecipeStep *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListRelationship.Companion")))
@interface MealzcoreRecipeStepListRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepRelationships")))
@interface MealzcoreRecipeStepRelationships : MealzcoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MealzcoreRecipeStepRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepRelationships.Companion")))
@interface MealzcoreRecipeStepRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Record.Companion")))
@interface MealzcoreRecordCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecordCompanion *shared __attribute__((swift_name("shared")));
- (MealzcoreRecord * _Nullable)fromStringStr:(NSString *)str __attribute__((swift_name("fromString(str:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordCounterWrapper")))
@interface MealzcoreRecordCounterWrapper : MealzcoreBase
- (instancetype)initWithLinks:(MealzcoreRecordLink *)links data:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)data __attribute__((swift_name("init(links:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecordCounterWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreRecordLink *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecordCounterWrapper *)doCopyLinks:(MealzcoreRecordLink *)links data:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)data __attribute__((swift_name("doCopy(links:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getCount __attribute__((swift_name("getCount()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable data __attribute__((swift_name("data")));
@property MealzcoreRecordLink *links __attribute__((swift_name("links")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordCounterWrapper.Companion")))
@interface MealzcoreRecordCounterWrapperCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecordCounterWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordLink")))
@interface MealzcoreRecordLink : MealzcoreBase
- (instancetype)initWithFirst:(NSString *)first last:(NSString *)last __attribute__((swift_name("init(first:last:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecordLinkCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecordLink *)doCopyFirst:(NSString *)first last:(NSString *)last __attribute__((swift_name("doCopy(first:last:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *first __attribute__((swift_name("first")));
@property (readonly) NSString *last __attribute__((swift_name("last")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordLink.Companion")))
@interface MealzcoreRecordLinkCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecordLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordWrapper")))
@interface MealzcoreRecordWrapper : MealzcoreBase
- (instancetype)initWithData:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)data included:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)included __attribute__((swift_name("init(data:included:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreRecordWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreRecordWrapper *)doCopyData:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)data included:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)included __attribute__((swift_name("doCopy(data:included:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MealzcoreRecord *)toRecord __attribute__((swift_name("toRecord()")));
- (NSArray<MealzcoreRecord *> *)toRecords __attribute__((swift_name("toRecords()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable data __attribute__((swift_name("data")));
@property MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable included __attribute__((swift_name("included")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordWrapper.Companion")))
@interface MealzcoreRecordWrapperCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecordWrapperCompanion *shared __attribute__((swift_name("shared")));
- (MealzcoreRecordWrapper *)fromRecordRecord:(MealzcoreRecord *)record __attribute__((swift_name("fromRecord(record:)")));
- (MealzcoreRecordWrapper *)fromRecordsRecords:(NSArray<MealzcoreRecord *> *)records __attribute__((swift_name("fromRecords(records:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Relationship.Companion")))
@interface MealzcoreRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelationshipList.Companion")))
@interface MealzcoreRelationshipListCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Relationships.Companion")))
@interface MealzcoreRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (MealzcoreKotlinx_serialization_jsonJsonElement *)filterEmptyRelationshipsRelationships:(MealzcoreKotlinx_serialization_jsonJsonElement *)relationships __attribute__((swift_name("filterEmptyRelationships(relationships:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sponsor")))
@interface MealzcoreSponsor : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsor *)doCopyId:(NSString *)id attributes:(MealzcoreSponsorAttributes * _Nullable)attributes relationships:(MealzcoreSponsorRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsorAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreSponsorRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sponsor.Companion")))
@interface MealzcoreSponsorCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorAttributes")))
@interface MealzcoreSponsorAttributes : MealzcoreAttributes
- (instancetype)initWithName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("init(name:logoUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorAttributes *)doCopyName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("doCopy(name:logoUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorAttributes.Companion")))
@interface MealzcoreSponsorAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlock")))
@interface MealzcoreSponsorBlock : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlock *)doCopyId:(NSString *)id attributes:(MealzcoreSponsorBlockAttributes * _Nullable)attributes relationships:(MealzcoreSponsorBlockRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsorBlockAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreSponsorBlockRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlock.Companion")))
@interface MealzcoreSponsorBlockCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockAttributes")))
@interface MealzcoreSponsorBlockAttributes : MealzcoreAttributes
- (instancetype)initWithPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockAttributesCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockAttributes *)doCopyPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString * _Nullable videoUrl __attribute__((swift_name("videoUrl")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockAttributes.Companion")))
@interface MealzcoreSponsorBlockAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationshipName")))
@interface MealzcoreSponsorBlockRelationshipName : MealzcoreKotlinEnum<MealzcoreSponsorBlockRelationshipName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreSponsorBlockRelationshipName *sponsorBlockType __attribute__((swift_name("sponsorBlockType")));
+ (MealzcoreKotlinArray<MealzcoreSponsorBlockRelationshipName *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *relationshipName __attribute__((swift_name("relationshipName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationships")))
@interface MealzcoreSponsorBlockRelationships : MealzcoreRelationships
- (instancetype)initWithSponsorBlockType:(MealzcoreSponsorBlockTypeRelationship * _Nullable)sponsorBlockType __attribute__((swift_name("init(sponsorBlockType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MealzcoreSponsorBlockTypeRelationship * _Nullable sponsorBlockType __attribute__((swift_name("sponsorBlockType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationships.Companion")))
@interface MealzcoreSponsorBlockRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockType")))
@interface MealzcoreSponsorBlockType : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockTypeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockTypeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockTypeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockType *)doCopyId:(NSString *)id attributes:(MealzcoreSponsorBlockTypeAttributes * _Nullable)attributes relationships:(MealzcoreSponsorBlockTypeRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSponsorBlockTypeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreSponsorBlockTypeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockType.Companion")))
@interface MealzcoreSponsorBlockTypeCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeAttributes")))
@interface MealzcoreSponsorBlockTypeAttributes : MealzcoreAttributes
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockTypeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSponsorBlockTypeAttributes *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeAttributes.Companion")))
@interface MealzcoreSponsorBlockTypeAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/SponsorBlockTypeSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationship")))
@interface MealzcoreSponsorBlockTypeRelationship : MealzcoreRelationship
- (instancetype)initWithData:(MealzcoreSponsorBlockType *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlockTypeRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MealzcoreSponsorBlockType *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationship.Companion")))
@interface MealzcoreSponsorBlockTypeRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationships")))
@interface MealzcoreSponsorBlockTypeRelationships : MealzcoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/SponsorBlockTypeRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeSerializer")))
@interface MealzcoreSponsorBlockTypeSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsorBlockTypeRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreSponsorBlockTypeRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypesList")))
@interface MealzcoreSponsorBlockTypesList : MealzcoreKotlinEnum<MealzcoreSponsorBlockTypesList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreSponsorBlockTypesList *title __attribute__((swift_name("title")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *smallTitle __attribute__((swift_name("smallTitle")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *picture __attribute__((swift_name("picture")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *smallPicture __attribute__((swift_name("smallPicture")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *imageWithText __attribute__((swift_name("imageWithText")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *imageAndText __attribute__((swift_name("imageAndText")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *textAndImage __attribute__((swift_name("textAndImage")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *text __attribute__((swift_name("text")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *smallText __attribute__((swift_name("smallText")));
@property (class, readonly) MealzcoreSponsorBlockTypesList *video __attribute__((swift_name("video")));
+ (MealzcoreKotlinArray<MealzcoreSponsorBlockTypesList *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/SponsorBlocksSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksRelationships")))
@interface MealzcoreSponsorBlocksRelationships : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreSponsorBlock *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorBlocksRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreSponsorBlock *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksRelationships.Companion")))
@interface MealzcoreSponsorBlocksRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlocksRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/SponsorBlocksRelationships))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksSerializer")))
@interface MealzcoreSponsorBlocksSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlocksSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlocksSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsorBlocksRelationships *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreSponsorBlocksRelationships *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/SponsorListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListRelationship")))
@interface MealzcoreSponsorListRelationship : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreSponsor *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreSponsor *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListRelationship.Companion")))
@interface MealzcoreSponsorListRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/SponsorListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListSerializer")))
@interface MealzcoreSponsorListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsorListRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreSponsorListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationshipName")))
@interface MealzcoreSponsorRelationshipName : MealzcoreKotlinEnum<MealzcoreSponsorRelationshipName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreSponsorRelationshipName *sponsorBlock __attribute__((swift_name("sponsorBlock")));
+ (MealzcoreKotlinArray<MealzcoreSponsorRelationshipName *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *relationshipName __attribute__((swift_name("relationshipName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationships")))
@interface MealzcoreSponsorRelationships : MealzcoreRelationships
- (instancetype)initWithSponsorBlocks:(MealzcoreSponsorBlocksRelationships * _Nullable)sponsorBlocks __attribute__((swift_name("init(sponsorBlocks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSponsorRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MealzcoreSponsorBlocksRelationships * _Nullable sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationships.Companion")))
@interface MealzcoreSponsorRelationshipsCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionsCriteria")))
@interface MealzcoreSuggestionsCriteria : MealzcoreBase
- (instancetype)initWithShelfIngredientsIds:(NSArray<NSString *> * _Nullable)shelfIngredientsIds currentIngredientsIds:(NSArray<NSString *> * _Nullable)currentIngredientsIds basketIngredientsIds:(NSArray<NSString *> * _Nullable)basketIngredientsIds groupId:(NSString * _Nullable)groupId __attribute__((swift_name("init(shelfIngredientsIds:currentIngredientsIds:basketIngredientsIds:groupId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSuggestionsCriteriaCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSuggestionsCriteria *)doCopyShelfIngredientsIds:(NSArray<NSString *> * _Nullable)shelfIngredientsIds currentIngredientsIds:(NSArray<NSString *> * _Nullable)currentIngredientsIds basketIngredientsIds:(NSArray<NSString *> * _Nullable)basketIngredientsIds groupId:(NSString * _Nullable)groupId __attribute__((swift_name("doCopy(shelfIngredientsIds:currentIngredientsIds:basketIngredientsIds:groupId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable basketIngredientsIds __attribute__((swift_name("basketIngredientsIds")));
@property (readonly) NSArray<NSString *> * _Nullable currentIngredientsIds __attribute__((swift_name("currentIngredientsIds")));
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property (readonly) NSArray<NSString *> * _Nullable shelfIngredientsIds __attribute__((swift_name("shelfIngredientsIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionsCriteria.Companion")))
@interface MealzcoreSuggestionsCriteriaCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSuggestionsCriteriaCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Supplier")))
@interface MealzcoreSupplier : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSupplierCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplier *)doCopyId:(NSString *)id attributes:(MealzcoreSupplierAttributes * _Nullable)attributes relationships:(MealzcoreSupplierRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreSupplierAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreSupplierRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Supplier.Companion")))
@interface MealzcoreSupplierCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSupplierCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierAttributes")))
@interface MealzcoreSupplierAttributes : MealzcoreAttributes
- (instancetype)initWithName:(NSString * _Nullable)name languageId:(NSString * _Nullable)languageId __attribute__((swift_name("init(name:languageId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSupplierAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierAttributes *)doCopyName:(NSString * _Nullable)name languageId:(NSString * _Nullable)languageId __attribute__((swift_name("doCopy(name:languageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable languageId __attribute__((swift_name("languageId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierAttributes.Companion")))
@interface MealzcoreSupplierAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSupplierAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierNotificationWrapper")))
@interface MealzcoreSupplierNotificationWrapper : MealzcoreBase
- (instancetype)initWithToken:(NSString *)token status:(NSString *)status price:(NSString * _Nullable)price __attribute__((swift_name("init(token:status:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreSupplierNotificationWrapperCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierNotificationWrapper *)doCopyToken:(NSString *)token status:(NSString *)status price:(NSString * _Nullable)price __attribute__((swift_name("doCopy(token:status:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable price __attribute__((swift_name("price")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierNotificationWrapper.Companion")))
@interface MealzcoreSupplierNotificationWrapperCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSupplierNotificationWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierProduct")))
@interface MealzcoreSupplierProduct : MealzcoreBase
- (instancetype)initWithId:(NSString *)id quantity:(int32_t)quantity name:(NSString * _Nullable)name productIdentifier:(NSString * _Nullable)productIdentifier imageURL:(NSString * _Nullable)imageURL __attribute__((swift_name("init(id:quantity:name:productIdentifier:imageURL:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreSupplierProduct *)doCopyId:(NSString *)id quantity:(int32_t)quantity name:(NSString * _Nullable)name productIdentifier:(NSString * _Nullable)productIdentifier imageURL:(NSString * _Nullable)imageURL __attribute__((swift_name("doCopy(id:quantity:name:productIdentifier:imageURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageURL __attribute__((swift_name("imageURL")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable productIdentifier __attribute__((swift_name("productIdentifier")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierRelationships")))
@interface MealzcoreSupplierRelationships : MealzcoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)supplierRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSupplierRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag")))
@interface MealzcoreTag : MealzcoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MealzcoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreTagCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTagAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTagRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTag *)doCopyId:(NSString *)id attributes:(MealzcoreTagAttributes * _Nullable)attributes relationships:(MealzcoreTagRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreTagAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MealzcoreTagRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag.Companion")))
@interface MealzcoreTagCompanion : MealzcoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MealzcoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagAttributes")))
@interface MealzcoreTagAttributes : MealzcoreAttributes
- (instancetype)initWithTagTypeId:(NSString *)tagTypeId name:(NSString *)name iconUrl:(NSString * _Nullable)iconUrl pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("init(tagTypeId:name:iconUrl:pictureUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreTagAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreTagAttributes *)doCopyTagTypeId:(NSString *)tagTypeId name:(NSString *)name iconUrl:(NSString * _Nullable)iconUrl pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("doCopy(tagTypeId:name:iconUrl:pictureUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString *tagTypeId __attribute__((swift_name("tagTypeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagAttributes.Companion")))
@interface MealzcoreTagAttributesCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=ai/mealz/core/model/TagListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagListListSerializer")))
@interface MealzcoreTagListListSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tagListListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagListListSerializer *shared __attribute__((swift_name("shared")));
- (MealzcoreTagListRelationship *)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(MealzcoreTagListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=ai/mealz/core/model/TagListListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagListRelationship")))
@interface MealzcoreTagListRelationship : MealzcoreRelationshipList
- (instancetype)initWithData:(NSArray<MealzcoreTag *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MealzcoreTagListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MealzcoreTag *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagListRelationship.Companion")))
@interface MealzcoreTagListRelationshipCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagRelationships")))
@interface MealzcoreTagRelationships : MealzcoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tagRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MealzcoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MealzcoreKotlinArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagTypes")))
@interface MealzcoreTagTypes : MealzcoreKotlinEnum<MealzcoreTagTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MealzcoreTagTypes *diet __attribute__((swift_name("diet")));
@property (class, readonly) MealzcoreTagTypes *ingredient __attribute__((swift_name("ingredient")));
@property (class, readonly) MealzcoreTagTypes *equipment __attribute__((swift_name("equipment")));
+ (MealzcoreKotlinArray<MealzcoreTagTypes *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomDurationSerializer")))
@interface MealzcoreCustomDurationSerializer : MealzcoreBase <MealzcoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customDurationSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreCustomDurationSerializer *shared __attribute__((swift_name("shared")));
- (id)deserializeDecoder:(id<MealzcoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MealzcoreKotlinx_serialization_coreEncoder>)encoder value:(id)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MealzcoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketFakeFactory")))
@interface MealzcoreBasketFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreBasketFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreBasket *)createBasketId:(NSString *)id attributes:(MealzcoreBasketAttributes *)attributes relationships:(MealzcoreBasketRelationships * _Nullable)relationships __attribute__((swift_name("createBasket(id:attributes:relationships:)")));
- (MealzcoreBasketAttributes *)createBasketAttributes __attribute__((swift_name("createBasketAttributes()")));
- (MealzcoreBasketRelationships *)createBasketRelationships __attribute__((swift_name("createBasketRelationships()")));
- (MealzcoreBasketEntry *)createEntryId:(NSString *)id attributes:(MealzcoreBasketEntryAttributes * _Nullable)attributes relationships:(MealzcoreBasketEntryRelationships * _Nullable)relationships __attribute__((swift_name("createEntry(id:attributes:relationships:)")));
- (MealzcoreBasketEntryAttributes *)createEntryAttributes __attribute__((swift_name("createEntryAttributes()")));
- (MealzcoreBasketEntryRelationships *)createEntryRelationships __attribute__((swift_name("createEntryRelationships()")));
@property (readonly) NSString *FAKE_BASKET_ID __attribute__((swift_name("FAKE_BASKET_ID")));
@property (readonly) NSString *FAKE_ENTRY_ID __attribute__((swift_name("FAKE_ENTRY_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientFakeFactory")))
@interface MealzcoreIngredientFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredientFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreIngredientFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreIngredient *)createId:(NSString *)id attributes:(MealzcoreIngredientAttributes * _Nullable)attributes relationships:(MealzcoreIngredientRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreIngredientAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemFakeFactory")))
@interface MealzcoreItemFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreItemFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreItem *)createId:(NSString *)id attributes:(MealzcoreItemAttributes * _Nullable)attributes relationships:(MealzcoreItemRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreItemAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageFakeFactory")))
@interface MealzcorePackageFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)packageFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePackageFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcorePackage *)createId:(NSString *)id attributes:(MealzcorePackageAttributes * _Nullable)attributes relationships:(MealzcorePackageRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcorePackageAttributes *)createAttributesTitle:(NSString *)title __attribute__((swift_name("createAttributes(title:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleFakeFactory")))
@interface MealzcorePointOfSaleFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pointOfSaleFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcorePointOfSaleFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcorePointOfSale *)createId:(NSString *)id __attribute__((swift_name("create(id:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeFakeFactory")))
@interface MealzcoreRecipeFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipe *)createId:(NSString *)id attributes:(MealzcoreRecipeAttributes * _Nullable)attributes relationships:(MealzcoreRecipeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreRecipeAttributes *)createAdvancedAttributes __attribute__((swift_name("createAdvancedAttributes()")));
- (MealzcoreRecipeAttributes *)createAttributesTitle:(NSString *)title mediaUrl:(NSString *)mediaUrl __attribute__((swift_name("createAttributes(title:mediaUrl:)")));
- (MealzcoreRecipeRelationships *)createRelationshipsIngredients:(MealzcoreIngredientListRelationship *)ingredients __attribute__((swift_name("createRelationships(ingredients:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeFakeFactory")))
@interface MealzcoreRecipeLikeFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeLikeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeLikeFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipeLike *)createId:(NSString *)id attributes:(MealzcoreRecipeLikeAttributes * _Nullable)attributes relationships:(MealzcoreRecipeLikeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreRecipeLikeAttributes *)createAttributesIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("createAttributes(isPast:recipeId:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepFakeFactory")))
@interface MealzcoreRecipeStepFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeStepFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreRecipeStepFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreRecipeStep *)createId:(NSString *)id attributes:(MealzcoreRecipeStepAttributes * _Nullable)attributes relationships:(MealzcoreRecipeStepRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreRecipeStepAttributes *)createAttributesStepNumber:(int32_t)stepNumber title:(NSString *)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("createAttributes(stepNumber:title:stepDescription:mediaUrl:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockFakeFactory")))
@interface MealzcoreSponsorBlockFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsorBlock *)createId:(NSString *)id attributes:(MealzcoreSponsorBlockAttributes * _Nullable)attributes relationships:(MealzcoreSponsorBlockRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreSponsorBlockAttributes *)createAttributesPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("createAttributes(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeFakeFactory")))
@interface MealzcoreSponsorBlockTypeFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorBlockTypeFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsorBlockType *)createId:(NSString *)id attributes:(MealzcoreSponsorBlockTypeAttributes * _Nullable)attributes relationships:(MealzcoreSponsorBlockTypeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreSponsorBlockTypeAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorFakeFactory")))
@interface MealzcoreSponsorFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSponsorFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreSponsor *)createId:(NSString *)id attributes:(MealzcoreSponsorAttributes * _Nullable)attributes relationships:(MealzcoreSponsorRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MealzcoreSponsorAttributes *)createAttributesName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("createAttributes(name:logoUrl:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierFakeFactory")))
@interface MealzcoreSupplierFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)supplierFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreSupplierFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreSupplier *)createId:(NSString *)id attributes:(MealzcoreSupplierAttributes * _Nullable)attributes __attribute__((swift_name("create(id:attributes:)")));
- (MealzcoreSupplierAttributes *)createAttributes __attribute__((swift_name("createAttributes()")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagFakeFactory")))
@interface MealzcoreTagFakeFactory : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tagFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreTagFakeFactory *shared __attribute__((swift_name("shared")));
- (MealzcoreTag *)createId:(NSString *)id attributes:(MealzcoreTagAttributes * _Nullable)attributes __attribute__((swift_name("create(id:attributes:)")));
- (MealzcoreTagAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealzImages")))
@interface MealzcoreMealzImages : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mealzImages __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreMealzImages *shared __attribute__((swift_name("shared")));
- (MealzcoreResourcesImageResource *)getImageWithFileNameFileName:(NSString *)fileName __attribute__((swift_name("getImageWithFileName(fileName:)")));
@end

@interface MealzcoreSubscriptionConfigBuilder (Extensions)
- (void)basketInit:(void (^)(MealzcoreBasketSubscriptionBuilder *))init __attribute__((swift_name("basket(init:)")));
@end

@interface MealzcoreSdkBuilder (Extensions)
- (void)sdkRequirementInit:(void (^)(MealzcoreSdkRequirementBuilder *))init __attribute__((swift_name("sdkRequirement(init:)")));
- (void)subscriptionsInit:(void (^)(MealzcoreSubscriptionConfigBuilder *))init __attribute__((swift_name("subscriptions(init:)")));
@end

@interface MealzcoreKMMContext (Extensions)
- (NSArray<NSString *> * _Nullable)getArrayOrNullKey:(NSString *)key __attribute__((swift_name("getArrayOrNull(key:)")));
- (MealzcoreDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (MealzcoreInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (void)putArrayKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("putArray(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface MealzcorePlatformKt : MealzcoreBase
+ (MealzcoreOperatingSystem *)getOperatingSystem __attribute__((swift_name("getOperatingSystem()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WrappingKt")))
@interface MealzcoreWrappingKt : MealzcoreBase
+ (id _Nullable)dualLetP1:(id _Nullable)p1 p2:(id _Nullable)p2 block:(id _Nullable (^)(id, id))block __attribute__((swift_name("dualLet(p1:p2:block:)")));
+ (id _Nullable)letElseP:(id _Nullable)p block:(id _Nullable (^)(id _Nullable))block elseBlock:(id _Nullable (^)(void))elseBlock __attribute__((swift_name("letElse(p:block:elseBlock:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryListExtentionKt")))
@interface MealzcoreBasketEntryListExtentionKt : MealzcoreBase
+ (NSArray<MealzcoreBasketEntry *> *)active:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("active(_:)")));
+ (NSArray<MealzcoreBasketEntry *> *)available:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("available(_:)")));
+ (NSArray<MealzcoreBasketEntry *> *)deleted:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("deleted(_:)")));
+ (NSArray<MealzcoreBasketEntry *> *)forRecipe:(NSArray<MealzcoreBasketEntry *> *)receiver recipeId:(NSString *)recipeId __attribute__((swift_name("forRecipe(_:recipeId:)")));
+ (NSArray<MealzcoreBasketEntry *> *)forRecipes:(NSArray<MealzcoreBasketEntry *> *)receiver recipes:(NSArray<MealzcoreRecipe *> *)recipes __attribute__((swift_name("forRecipes(_:recipes:)")));
+ (NSArray<MealzcoreBasketEntry *> *)forRecipesId:(NSArray<MealzcoreBasketEntry *> *)receiver recipesId:(NSArray<NSString *> *)recipesId __attribute__((swift_name("forRecipesId(_:recipesId:)")));
+ (NSArray<MealzcoreBasketEntry *> *)oftenDeleted:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("oftenDeleted(_:)")));
+ (double)price:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("price(_:)")));
+ (NSArray<MealzcoreBasketEntry *> *)unavailable:(NSArray<MealzcoreBasketEntry *> *)receiver __attribute__((swift_name("unavailable(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleExtensionKt")))
@interface MealzcoreDoubleExtensionKt : MealzcoreBase
+ (NSString *)formatDecimal:(double)receiver maxFractionDigits:(int32_t)maxFractionDigits __attribute__((swift_name("formatDecimal(_:maxFractionDigits:)")));
+ (NSString *)formatPrice:(double)receiver __attribute__((swift_name("formatPrice(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18nResourceExtKt")))
@interface MealzcoreI18nResourceExtKt : MealzcoreBase
+ (MealzcoreI18n *)i18n:(id<MealzcoreI18nResource>)receiver __attribute__((swift_name("i18n(_:)")));
+ (id<MealzcoreResourcesStringDesc>)asStringDesc:(id<MealzcoreI18nResource>)receiver __attribute__((swift_name("asStringDesc(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosGetCustomResourcesKt")))
@interface MealzcoreIosGetCustomResourcesKt : MealzcoreBase
+ (MealzcoreResourcesPluralsResource * _Nullable)customized:(id<MealzcoreI18nResource>)receiver __attribute__((swift_name("customized(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordKt")))
@interface MealzcoreRecordKt : MealzcoreBase
+ (int32_t)getIntValueOrThrow:(NSDictionary<NSString *, MealzcoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getIntValueOrThrow(_:attribute:)")));
+ (NSString * _Nullable)getStringValueOrNull:(NSDictionary<NSString *, MealzcoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getStringValueOrNull(_:attribute:)")));
+ (NSString *)getStringValueOrThrow:(NSDictionary<NSString *, MealzcoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getStringValueOrThrow(_:attribute:)")));
@property (class, readonly) MealzcoreKotlinx_serialization_jsonJson *jsonFormat __attribute__((swift_name("jsonFormat")));
@end

__attribute__((swift_name("KotlinException")))
@interface MealzcoreKotlinException : MealzcoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MealzcoreKotlinRuntimeException : MealzcoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MealzcoreKotlinIllegalStateException : MealzcoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MealzcoreKotlinCancellationException : MealzcoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MealzcoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MealzcoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MealzcoreKotlinEnumCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MealzcoreKotlinArray<T> : MealzcoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MealzcoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MealzcoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MealzcoreKotlinx_coroutines_coreJob <MealzcoreKotlinCoroutineContextElement>
@required
- (id<MealzcoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MealzcoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MealzcoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MealzcoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MealzcoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MealzcoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MealzcoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MealzcoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MealzcoreKotlinx_coroutines_coreJob>)plusOther_:(id<MealzcoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MealzcoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol MealzcoreKotlinx_coroutines_coreDeferred <MealzcoreKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MealzcoreKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MealzcoreKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MealzcoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MealzcoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MealzcoreKotlinAbstractCoroutineContextKey<B, E> : MealzcoreBase <MealzcoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MealzcoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MealzcoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MealzcoreKotlinx_coroutines_coreCoroutineDispatcherKey : MealzcoreKotlinAbstractCoroutineContextKey<id<MealzcoreKotlinContinuationInterceptor>, MealzcoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MealzcoreKotlinCoroutineContextKey>)baseKey safeCast:(id<MealzcoreKotlinCoroutineContextElement> _Nullable (^)(id<MealzcoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MealzcoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MealzcoreKotlinx_coroutines_coreSharedFlow <MealzcoreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MealzcoreKotlinx_coroutines_coreStateFlow <MealzcoreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MealzcoreKotlinNothing : MealzcoreBase
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol MealzcoreKotlinx_coroutines_coreMutableSharedFlow <MealzcoreKotlinx_coroutines_coreSharedFlow, MealzcoreKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineExceptionHandler")))
@protocol MealzcoreKotlinx_coroutines_coreCoroutineExceptionHandler <MealzcoreKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<MealzcoreKotlinCoroutineContext>)context exception:(MealzcoreKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol MealzcoreKotlinx_coroutines_coreMutableStateFlow <MealzcoreKotlinx_coroutines_coreStateFlow, MealzcoreKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcesPluralsResource")))
@interface MealzcoreResourcesPluralsResource : MealzcoreBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcesStringResource")))
@interface MealzcoreResourcesStringResource : MealzcoreBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSBundle *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MealzcoreResourcesStringResource *)doCopyResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(resourceId:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MealzcoreKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MealzcoreKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MealzcoreKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MealzcoreKotlinKClass <MealzcoreKotlinKDeclarationContainer, MealzcoreKotlinKAnnotatedElement, MealzcoreKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MealzcoreKotlinx_serialization_jsonJsonElement : MealzcoreBase
@property (class, readonly, getter=companion) MealzcoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MealzcoreKotlinx_serialization_coreEncoder
@required
- (id<MealzcoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MealzcoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MealzcoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MealzcoreKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MealzcoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MealzcoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MealzcoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MealzcoreKotlinx_serialization_coreDecoder
@required
- (id<MealzcoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MealzcoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MealzcoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcesImageResource")))
@interface MealzcoreResourcesImageResource : MealzcoreBase
- (instancetype)initWithAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("init(assetImageName:bundle:)"))) __attribute__((objc_designated_initializer));
- (UIImage * _Nullable)toUIImage __attribute__((swift_name("toUIImage()")));
@property (readonly) NSString *assetImageName __attribute__((swift_name("assetImageName")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@end

__attribute__((swift_name("ResourcesStringDesc")))
@protocol MealzcoreResourcesStringDesc
@required
- (NSString *)localized __attribute__((swift_name("localized()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol MealzcoreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol MealzcoreKotlinx_serialization_coreStringFormat <MealzcoreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface MealzcoreKotlinx_serialization_jsonJson : MealzcoreBase <MealzcoreKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) MealzcoreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(MealzcoreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MealzcoreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MealzcoreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MealzcoreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MealzcoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol MealzcoreKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<MealzcoreKotlinx_coroutines_coreSelectInstance>)select block:(id<MealzcoreKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MealzcoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MealzcoreKotlinx_coroutines_coreChildHandle <MealzcoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MealzcoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MealzcoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MealzcoreKotlinx_coroutines_coreChildJob <MealzcoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MealzcoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MealzcoreKotlinSequence
@required
- (id<MealzcoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MealzcoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<MealzcoreKotlinx_coroutines_coreSelectInstance>)select block:(id<MealzcoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MealzcoreKotlinx_serialization_jsonJsonElementCompanion : MealzcoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MealzcoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MealzcoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MealzcoreKotlinx_serialization_coreSerializersModule : MealzcoreBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MealzcoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MealzcoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MealzcoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MealzcoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MealzcoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MealzcoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MealzcoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MealzcoreKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MealzcoreKotlinx_serialization_coreSerialKind : MealzcoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MealzcoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MealzcoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MealzcoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MealzcoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface MealzcoreKotlinx_serialization_jsonJsonDefault : MealzcoreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MealzcoreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface MealzcoreKotlinx_serialization_jsonJsonConfiguration : MealzcoreBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MealzcoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MealzcoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MealzcoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MealzcoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MealzcoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MealzcoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MealzcoreKotlinSuspendFunction1 <MealzcoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MealzcoreKotlinx_coroutines_coreParentJob <MealzcoreKotlinx_coroutines_coreJob>
@required
- (MealzcoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MealzcoreKotlinSuspendFunction0 <MealzcoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MealzcoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MealzcoreKotlinKClass>)kClass provider:(id<MealzcoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MealzcoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MealzcoreKotlinKClass>)kClass serializer:(id<MealzcoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MealzcoreKotlinKClass>)baseClass actualClass:(id<MealzcoreKotlinKClass>)actualClass actualSerializer:(id<MealzcoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MealzcoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<MealzcoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MealzcoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<MealzcoreKotlinKClass>)baseClass defaultSerializerProvider:(id<MealzcoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface MealzcoreKotlinx_coroutines_coreAtomicDesc : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MealzcoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MealzcoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property MealzcoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface MealzcoreKotlinx_coroutines_coreOpDescriptor : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MealzcoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : MealzcoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MealzcoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface MealzcoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : MealzcoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MealzcoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode : MealzcoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(MealzcoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MealzcoreBoolean *(^)(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MealzcoreBoolean *(^)(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(MealzcoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MealzcoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : MealzcoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MealzcoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MealzcoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MealzcoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MealzcoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MealzcoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MealzcoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
