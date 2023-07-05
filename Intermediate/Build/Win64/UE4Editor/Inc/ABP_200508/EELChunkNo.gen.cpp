// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELChunkNo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELChunkNo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELChunkNo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELChunkNo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELChunkNo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELChunkNo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELChunkNo>()
	{
		return EELChunkNo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELChunkNo(EELChunkNo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELChunkNo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELChunkNo_Hash() { return 139559465U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELChunkNo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELChunkNo"), 0, Get_Z_Construct_UEnum_ABP_200508_EELChunkNo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELChunkNo::CHUNK_NO_00", (int64)EELChunkNo::CHUNK_NO_00 },
				{ "EELChunkNo::CHUNK_NO_01", (int64)EELChunkNo::CHUNK_NO_01 },
				{ "EELChunkNo::CHUNK_NO_02", (int64)EELChunkNo::CHUNK_NO_02 },
				{ "EELChunkNo::CHUNK_NO_03", (int64)EELChunkNo::CHUNK_NO_03 },
				{ "EELChunkNo::CHUNK_NO_04", (int64)EELChunkNo::CHUNK_NO_04 },
				{ "EELChunkNo::CHUNK_NO_05", (int64)EELChunkNo::CHUNK_NO_05 },
				{ "EELChunkNo::CHUNK_NO_06", (int64)EELChunkNo::CHUNK_NO_06 },
				{ "EELChunkNo::CHUNK_NO_07", (int64)EELChunkNo::CHUNK_NO_07 },
				{ "EELChunkNo::CHUNK_NO_08", (int64)EELChunkNo::CHUNK_NO_08 },
				{ "EELChunkNo::CHUNK_NO_09", (int64)EELChunkNo::CHUNK_NO_09 },
				{ "EELChunkNo::CHUNK_NO_10", (int64)EELChunkNo::CHUNK_NO_10 },
				{ "EELChunkNo::CHUNK_NUM", (int64)EELChunkNo::CHUNK_NUM },
				{ "EELChunkNo::CHUNK_MAX", (int64)EELChunkNo::CHUNK_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CHUNK_MAX.Hidden", "" },
				{ "CHUNK_MAX.Name", "EELChunkNo::CHUNK_MAX" },
				{ "CHUNK_NO_00.Name", "EELChunkNo::CHUNK_NO_00" },
				{ "CHUNK_NO_01.Name", "EELChunkNo::CHUNK_NO_01" },
				{ "CHUNK_NO_02.Name", "EELChunkNo::CHUNK_NO_02" },
				{ "CHUNK_NO_03.Name", "EELChunkNo::CHUNK_NO_03" },
				{ "CHUNK_NO_04.Name", "EELChunkNo::CHUNK_NO_04" },
				{ "CHUNK_NO_05.Name", "EELChunkNo::CHUNK_NO_05" },
				{ "CHUNK_NO_06.Name", "EELChunkNo::CHUNK_NO_06" },
				{ "CHUNK_NO_07.Name", "EELChunkNo::CHUNK_NO_07" },
				{ "CHUNK_NO_08.Name", "EELChunkNo::CHUNK_NO_08" },
				{ "CHUNK_NO_09.Name", "EELChunkNo::CHUNK_NO_09" },
				{ "CHUNK_NO_10.Name", "EELChunkNo::CHUNK_NO_10" },
				{ "CHUNK_NUM.Name", "EELChunkNo::CHUNK_NUM" },
				{ "ModuleRelativePath", "Public/EELChunkNo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELChunkNo",
				"EELChunkNo",
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
