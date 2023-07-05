// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryCardSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryCardSize() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryCardSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryCardSize"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryCardSize>()
	{
		return ECareerStoryCardSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryCardSize(ECareerStoryCardSize_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryCardSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize_Hash() { return 2239414018U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryCardSize"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryCardSize::VeryShort", (int64)ECareerStoryCardSize::VeryShort },
				{ "ECareerStoryCardSize::Short", (int64)ECareerStoryCardSize::Short },
				{ "ECareerStoryCardSize::Middle", (int64)ECareerStoryCardSize::Middle },
				{ "ECareerStoryCardSize::Long", (int64)ECareerStoryCardSize::Long },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Long.Name", "ECareerStoryCardSize::Long" },
				{ "Middle.Name", "ECareerStoryCardSize::Middle" },
				{ "ModuleRelativePath", "Public/ECareerStoryCardSize.h" },
				{ "Short.Name", "ECareerStoryCardSize::Short" },
				{ "VeryShort.Name", "ECareerStoryCardSize::VeryShort" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryCardSize",
				"ECareerStoryCardSize",
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
