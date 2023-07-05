// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCity() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCity, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCity"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCity>()
	{
		return ECareerCity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCity(ECareerCity_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCity_Hash() { return 3625703023U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCity"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCity::None", (int64)ECareerCity::None },
				{ "ECareerCity::WashingtonDC", (int64)ECareerCity::WashingtonDC },
				{ "ECareerCity::Los_Angeles", (int64)ECareerCity::Los_Angeles },
				{ "ECareerCity::Austin", (int64)ECareerCity::Austin },
				{ "ECareerCity::Jacksonville", (int64)ECareerCity::Jacksonville },
				{ "ECareerCity::Philadelphia", (int64)ECareerCity::Philadelphia },
				{ "ECareerCity::Nashville", (int64)ECareerCity::Nashville },
				{ "ECareerCity::New_Orleans", (int64)ECareerCity::New_Orleans },
				{ "ECareerCity::Seattle", (int64)ECareerCity::Seattle },
				{ "ECareerCity::Toronto", (int64)ECareerCity::Toronto },
				{ "ECareerCity::Louisville", (int64)ECareerCity::Louisville },
				{ "ECareerCity::Minneapolis", (int64)ECareerCity::Minneapolis },
				{ "ECareerCity::Chicago", (int64)ECareerCity::Chicago },
				{ "ECareerCity::NewYork", (int64)ECareerCity::NewYork },
				{ "ECareerCity::Pittsburgh", (int64)ECareerCity::Pittsburgh },
				{ "ECareerCity::Atlanta", (int64)ECareerCity::Atlanta },
				{ "ECareerCity::Las_Vegas", (int64)ECareerCity::Las_Vegas },
				{ "ECareerCity::Max_City", (int64)ECareerCity::Max_City },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Atlanta.Name", "ECareerCity::Atlanta" },
				{ "Austin.Name", "ECareerCity::Austin" },
				{ "BlueprintType", "true" },
				{ "Chicago.Name", "ECareerCity::Chicago" },
				{ "Jacksonville.Name", "ECareerCity::Jacksonville" },
				{ "Las_Vegas.Name", "ECareerCity::Las_Vegas" },
				{ "Los_Angeles.Name", "ECareerCity::Los_Angeles" },
				{ "Louisville.Name", "ECareerCity::Louisville" },
				{ "Max_City.Name", "ECareerCity::Max_City" },
				{ "Minneapolis.Name", "ECareerCity::Minneapolis" },
				{ "ModuleRelativePath", "Public/ECareerCity.h" },
				{ "Nashville.Name", "ECareerCity::Nashville" },
				{ "New_Orleans.Name", "ECareerCity::New_Orleans" },
				{ "NewYork.Name", "ECareerCity::NewYork" },
				{ "None.Name", "ECareerCity::None" },
				{ "Philadelphia.Name", "ECareerCity::Philadelphia" },
				{ "Pittsburgh.Name", "ECareerCity::Pittsburgh" },
				{ "Seattle.Name", "ECareerCity::Seattle" },
				{ "Toronto.Name", "ECareerCity::Toronto" },
				{ "WashingtonDC.Name", "ECareerCity::WashingtonDC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCity",
				"ECareerCity",
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
