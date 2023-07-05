// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSPlayerReportsCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSPlayerReportsCategory() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSPlayerReportsCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSPlayerReportsCategory"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSPlayerReportsCategory>()
	{
		return EEOSPlayerReportsCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSPlayerReportsCategory(EEOSPlayerReportsCategory_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSPlayerReportsCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory_Hash() { return 2807567084U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSPlayerReportsCategory"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSPlayerReportsCategory::Invalid", (int64)EEOSPlayerReportsCategory::Invalid },
				{ "EEOSPlayerReportsCategory::Cheating", (int64)EEOSPlayerReportsCategory::Cheating },
				{ "EEOSPlayerReportsCategory::Exploiting", (int64)EEOSPlayerReportsCategory::Exploiting },
				{ "EEOSPlayerReportsCategory::OffensiveProfile", (int64)EEOSPlayerReportsCategory::OffensiveProfile },
				{ "EEOSPlayerReportsCategory::VerbalAbuse", (int64)EEOSPlayerReportsCategory::VerbalAbuse },
				{ "EEOSPlayerReportsCategory::Scamming", (int64)EEOSPlayerReportsCategory::Scamming },
				{ "EEOSPlayerReportsCategory::Spamming", (int64)EEOSPlayerReportsCategory::Spamming },
				{ "EEOSPlayerReportsCategory::Other", (int64)EEOSPlayerReportsCategory::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cheating.Name", "EEOSPlayerReportsCategory::Cheating" },
				{ "Exploiting.Name", "EEOSPlayerReportsCategory::Exploiting" },
				{ "Invalid.Name", "EEOSPlayerReportsCategory::Invalid" },
				{ "ModuleRelativePath", "Public/EEOSPlayerReportsCategory.h" },
				{ "OffensiveProfile.Name", "EEOSPlayerReportsCategory::OffensiveProfile" },
				{ "Other.Name", "EEOSPlayerReportsCategory::Other" },
				{ "Scamming.Name", "EEOSPlayerReportsCategory::Scamming" },
				{ "Spamming.Name", "EEOSPlayerReportsCategory::Spamming" },
				{ "VerbalAbuse.Name", "EEOSPlayerReportsCategory::VerbalAbuse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSPlayerReportsCategory",
				"EEOSPlayerReportsCategory",
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
