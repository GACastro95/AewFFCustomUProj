// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EDummyItem02Content.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDummyItem02Content() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDummyItem02Content();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EDummyItem02Content_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EDummyItem02Content, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EDummyItem02Content"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EDummyItem02Content>()
	{
		return EDummyItem02Content_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDummyItem02Content(EDummyItem02Content_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EDummyItem02Content"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EDummyItem02Content_Hash() { return 1347918534U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EDummyItem02Content()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDummyItem02Content"), 0, Get_Z_Construct_UEnum_ABP_200508_EDummyItem02Content_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDummyItem02Content::Item1", (int64)EDummyItem02Content::Item1 },
				{ "EDummyItem02Content::Item2", (int64)EDummyItem02Content::Item2 },
				{ "EDummyItem02Content::Item3", (int64)EDummyItem02Content::Item3 },
				{ "EDummyItem02Content::Item4", (int64)EDummyItem02Content::Item4 },
				{ "EDummyItem02Content::Item5", (int64)EDummyItem02Content::Item5 },
				{ "EDummyItem02Content::Item6", (int64)EDummyItem02Content::Item6 },
				{ "EDummyItem02Content::Item7", (int64)EDummyItem02Content::Item7 },
				{ "EDummyItem02Content::Item8", (int64)EDummyItem02Content::Item8 },
				{ "EDummyItem02Content::Item9", (int64)EDummyItem02Content::Item9 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Item1.Name", "EDummyItem02Content::Item1" },
				{ "Item2.Name", "EDummyItem02Content::Item2" },
				{ "Item3.Name", "EDummyItem02Content::Item3" },
				{ "Item4.Name", "EDummyItem02Content::Item4" },
				{ "Item5.Name", "EDummyItem02Content::Item5" },
				{ "Item6.Name", "EDummyItem02Content::Item6" },
				{ "Item7.Name", "EDummyItem02Content::Item7" },
				{ "Item8.Name", "EDummyItem02Content::Item8" },
				{ "Item9.Name", "EDummyItem02Content::Item9" },
				{ "ModuleRelativePath", "Public/EDummyItem02Content.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EDummyItem02Content",
				"EDummyItem02Content",
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
