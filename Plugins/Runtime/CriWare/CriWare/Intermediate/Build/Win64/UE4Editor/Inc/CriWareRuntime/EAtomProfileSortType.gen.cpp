// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomProfileSortType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomProfileSortType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomProfileSortType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomProfileSortType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomProfileSortType>()
	{
		return EAtomProfileSortType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomProfileSortType(EAtomProfileSortType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomProfileSortType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Hash() { return 1522693828U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomProfileSortType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomProfileSortType::AtomComponentID", (int64)EAtomProfileSortType::AtomComponentID },
				{ "EAtomProfileSortType::Distance", (int64)EAtomProfileSortType::Distance },
				{ "EAtomProfileSortType::Name", (int64)EAtomProfileSortType::Name },
				{ "EAtomProfileSortType::Time", (int64)EAtomProfileSortType::Time },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AtomComponentID.Name", "EAtomProfileSortType::AtomComponentID" },
				{ "BlueprintType", "true" },
				{ "Distance.Name", "EAtomProfileSortType::Distance" },
				{ "ModuleRelativePath", "Public/EAtomProfileSortType.h" },
				{ "Name.Name", "EAtomProfileSortType::Name" },
				{ "Time.Name", "EAtomProfileSortType::Time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomProfileSortType",
				"EAtomProfileSortType",
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
