// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCutsceneCastType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCutsceneCastType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCutsceneCastType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCutsceneCastType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCutsceneCastType>()
	{
		return ECareerCutsceneCastType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCutsceneCastType(ECareerCutsceneCastType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCutsceneCastType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType_Hash() { return 896440007U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCutsceneCastType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCutsceneCastType::NONE", (int64)ECareerCutsceneCastType::NONE },
				{ "ECareerCutsceneCastType::CAST_A", (int64)ECareerCutsceneCastType::CAST_A },
				{ "ECareerCutsceneCastType::CAST_B", (int64)ECareerCutsceneCastType::CAST_B },
				{ "ECareerCutsceneCastType::CAST_C", (int64)ECareerCutsceneCastType::CAST_C },
				{ "ECareerCutsceneCastType::CAST_D", (int64)ECareerCutsceneCastType::CAST_D },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CAST_A.Name", "ECareerCutsceneCastType::CAST_A" },
				{ "CAST_B.Name", "ECareerCutsceneCastType::CAST_B" },
				{ "CAST_C.Name", "ECareerCutsceneCastType::CAST_C" },
				{ "CAST_D.Name", "ECareerCutsceneCastType::CAST_D" },
				{ "ModuleRelativePath", "Public/ECareerCutsceneCastType.h" },
				{ "NONE.Name", "ECareerCutsceneCastType::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCutsceneCastType",
				"ECareerCutsceneCastType",
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
