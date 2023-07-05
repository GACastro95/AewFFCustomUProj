// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDialogType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDialogType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDialogType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDialogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDialogType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDialogType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDialogType>()
	{
		return ECareerDialogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDialogType(ECareerDialogType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDialogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDialogType_Hash() { return 3462334996U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDialogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDialogType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDialogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDialogType::Dialog_SaveAndExit", (int64)ECareerDialogType::Dialog_SaveAndExit },
				{ "ECareerDialogType::Dialog_GotoDynamite_TurnSkip", (int64)ECareerDialogType::Dialog_GotoDynamite_TurnSkip },
				{ "ECareerDialogType::Dialog_Information", (int64)ECareerDialogType::Dialog_Information },
				{ "ECareerDialogType::Dialog_UnlockDark", (int64)ECareerDialogType::Dialog_UnlockDark },
				{ "ECareerDialogType::Dialog_UnlockRampage", (int64)ECareerDialogType::Dialog_UnlockRampage },
				{ "ECareerDialogType::Dialog_ResultMessage", (int64)ECareerDialogType::Dialog_ResultMessage },
				{ "ECareerDialogType::Dialog_SpecialReward", (int64)ECareerDialogType::Dialog_SpecialReward },
				{ "ECareerDialogType::Dialog_FinishCareerMode", (int64)ECareerDialogType::Dialog_FinishCareerMode },
				{ "ECareerDialogType::Dialog_GetAEWCash", (int64)ECareerDialogType::Dialog_GetAEWCash },
				{ "ECareerDialogType::Dialog_MAX", (int64)ECareerDialogType::Dialog_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dialog_FinishCareerMode.Name", "ECareerDialogType::Dialog_FinishCareerMode" },
				{ "Dialog_GetAEWCash.Name", "ECareerDialogType::Dialog_GetAEWCash" },
				{ "Dialog_GotoDynamite_TurnSkip.Name", "ECareerDialogType::Dialog_GotoDynamite_TurnSkip" },
				{ "Dialog_Information.Name", "ECareerDialogType::Dialog_Information" },
				{ "Dialog_MAX.Hidden", "" },
				{ "Dialog_MAX.Name", "ECareerDialogType::Dialog_MAX" },
				{ "Dialog_ResultMessage.Name", "ECareerDialogType::Dialog_ResultMessage" },
				{ "Dialog_SaveAndExit.Name", "ECareerDialogType::Dialog_SaveAndExit" },
				{ "Dialog_SpecialReward.Name", "ECareerDialogType::Dialog_SpecialReward" },
				{ "Dialog_UnlockDark.Name", "ECareerDialogType::Dialog_UnlockDark" },
				{ "Dialog_UnlockRampage.Name", "ECareerDialogType::Dialog_UnlockRampage" },
				{ "ModuleRelativePath", "Public/ECareerDialogType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDialogType",
				"ECareerDialogType",
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
