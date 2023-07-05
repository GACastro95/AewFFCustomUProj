// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELVictoryCutsceneType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELVictoryCutsceneType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELVictoryCutsceneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELVictoryCutsceneType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELVictoryCutsceneType>()
	{
		return EELVictoryCutsceneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELVictoryCutsceneType(EELVictoryCutsceneType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELVictoryCutsceneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType_Hash() { return 1034733983U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELVictoryCutsceneType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELVictoryCutsceneType::Single_Male_Normal", (int64)EELVictoryCutsceneType::Single_Male_Normal },
				{ "EELVictoryCutsceneType::Single_Female_Normal", (int64)EELVictoryCutsceneType::Single_Female_Normal },
				{ "EELVictoryCutsceneType::Single_Male_Champion", (int64)EELVictoryCutsceneType::Single_Male_Champion },
				{ "EELVictoryCutsceneType::Single_Female_Champion", (int64)EELVictoryCutsceneType::Single_Female_Champion },
				{ "EELVictoryCutsceneType::Tag_Male_Normal", (int64)EELVictoryCutsceneType::Tag_Male_Normal },
				{ "EELVictoryCutsceneType::Tag_Female_Normal", (int64)EELVictoryCutsceneType::Tag_Female_Normal },
				{ "EELVictoryCutsceneType::Tag_Male_Champion", (int64)EELVictoryCutsceneType::Tag_Male_Champion },
				{ "EELVictoryCutsceneType::Tag_Female_Champion", (int64)EELVictoryCutsceneType::Tag_Female_Champion },
				{ "EELVictoryCutsceneType::Tag_Mixed_Normal", (int64)EELVictoryCutsceneType::Tag_Mixed_Normal },
				{ "EELVictoryCutsceneType::Tag_Mixed_Champion", (int64)EELVictoryCutsceneType::Tag_Mixed_Champion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELVictoryCutsceneType.h" },
				{ "Single_Female_Champion.Name", "EELVictoryCutsceneType::Single_Female_Champion" },
				{ "Single_Female_Normal.Name", "EELVictoryCutsceneType::Single_Female_Normal" },
				{ "Single_Male_Champion.Name", "EELVictoryCutsceneType::Single_Male_Champion" },
				{ "Single_Male_Normal.Name", "EELVictoryCutsceneType::Single_Male_Normal" },
				{ "Tag_Female_Champion.Name", "EELVictoryCutsceneType::Tag_Female_Champion" },
				{ "Tag_Female_Normal.Name", "EELVictoryCutsceneType::Tag_Female_Normal" },
				{ "Tag_Male_Champion.Name", "EELVictoryCutsceneType::Tag_Male_Champion" },
				{ "Tag_Male_Normal.Name", "EELVictoryCutsceneType::Tag_Male_Normal" },
				{ "Tag_Mixed_Champion.Name", "EELVictoryCutsceneType::Tag_Mixed_Champion" },
				{ "Tag_Mixed_Normal.Name", "EELVictoryCutsceneType::Tag_Mixed_Normal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELVictoryCutsceneType",
				"EELVictoryCutsceneType",
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
