// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerItemPurchaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerItemPurchaseState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerItemPurchaseState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerItemPurchaseState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerItemPurchaseState>()
	{
		return ECareerItemPurchaseState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerItemPurchaseState(ECareerItemPurchaseState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerItemPurchaseState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState_Hash() { return 3834693831U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerItemPurchaseState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerItemPurchaseState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerItemPurchaseState::None", (int64)ECareerItemPurchaseState::None },
				{ "ECareerItemPurchaseState::LackMoney_AvailablePurchase", (int64)ECareerItemPurchaseState::LackMoney_AvailablePurchase },
				{ "ECareerItemPurchaseState::LcakMoney_HasNoEffect", (int64)ECareerItemPurchaseState::LcakMoney_HasNoEffect },
				{ "ECareerItemPurchaseState::Purchased", (int64)ECareerItemPurchaseState::Purchased },
				{ "ECareerItemPurchaseState::HasNoEffect", (int64)ECareerItemPurchaseState::HasNoEffect },
				{ "ECareerItemPurchaseState::AvailablePurchase", (int64)ECareerItemPurchaseState::AvailablePurchase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AvailablePurchase.Name", "ECareerItemPurchaseState::AvailablePurchase" },
				{ "BlueprintType", "true" },
				{ "HasNoEffect.Name", "ECareerItemPurchaseState::HasNoEffect" },
				{ "LackMoney_AvailablePurchase.Name", "ECareerItemPurchaseState::LackMoney_AvailablePurchase" },
				{ "LcakMoney_HasNoEffect.Name", "ECareerItemPurchaseState::LcakMoney_HasNoEffect" },
				{ "ModuleRelativePath", "Public/ECareerItemPurchaseState.h" },
				{ "None.Name", "ECareerItemPurchaseState::None" },
				{ "Purchased.Name", "ECareerItemPurchaseState::Purchased" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerItemPurchaseState",
				"ECareerItemPurchaseState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
