// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAutoAnimMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAutoAnimMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAutoAnimMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAutoAnimMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAutoAnimMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAutoAnimMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAutoAnimMode>()
	{
		return EAutoAnimMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoAnimMode(EAutoAnimMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAutoAnimMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAutoAnimMode_Hash() { return 4063906112U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAutoAnimMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoAnimMode"), 0, Get_Z_Construct_UEnum_ABP_200508_EAutoAnimMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoAnimMode::None", (int64)EAutoAnimMode::None },
				{ "EAutoAnimMode::PreviewTest", (int64)EAutoAnimMode::PreviewTest },
				{ "EAutoAnimMode::AllPreviewTest", (int64)EAutoAnimMode::AllPreviewTest },
				{ "EAutoAnimMode::DistanceTest", (int64)EAutoAnimMode::DistanceTest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllPreviewTest.Name", "EAutoAnimMode::AllPreviewTest" },
				{ "BlueprintType", "true" },
				{ "DistanceTest.Name", "EAutoAnimMode::DistanceTest" },
				{ "ModuleRelativePath", "Public/EAutoAnimMode.h" },
				{ "None.Name", "EAutoAnimMode::None" },
				{ "PreviewTest.Name", "EAutoAnimMode::PreviewTest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAutoAnimMode",
				"EAutoAnimMode",
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
