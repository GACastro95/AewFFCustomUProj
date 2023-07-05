// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCameraPlaceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCameraPlaceType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCameraPlaceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCameraPlaceType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCameraPlaceType>()
	{
		return ESSCameraPlaceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCameraPlaceType(ESSCameraPlaceType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCameraPlaceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType_Hash() { return 3249844880U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCameraPlaceType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCameraPlaceType::None", (int64)ESSCameraPlaceType::None },
				{ "ESSCameraPlaceType::Default", (int64)ESSCameraPlaceType::Default },
				{ "ESSCameraPlaceType::CenterArena", (int64)ESSCameraPlaceType::CenterArena },
				{ "ESSCameraPlaceType::Backyard", (int64)ESSCameraPlaceType::Backyard },
				{ "ESSCameraPlaceType::Room", (int64)ESSCameraPlaceType::Room },
				{ "ESSCameraPlaceType::Ring", (int64)ESSCameraPlaceType::Ring },
				{ "ESSCameraPlaceType::Place06", (int64)ESSCameraPlaceType::Place06 },
				{ "ESSCameraPlaceType::Place07", (int64)ESSCameraPlaceType::Place07 },
				{ "ESSCameraPlaceType::Place08", (int64)ESSCameraPlaceType::Place08 },
				{ "ESSCameraPlaceType::Place09", (int64)ESSCameraPlaceType::Place09 },
				{ "ESSCameraPlaceType::Place10", (int64)ESSCameraPlaceType::Place10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backyard.Name", "ESSCameraPlaceType::Backyard" },
				{ "BlueprintType", "true" },
				{ "CenterArena.Name", "ESSCameraPlaceType::CenterArena" },
				{ "Default.Name", "ESSCameraPlaceType::Default" },
				{ "ModuleRelativePath", "Public/ESSCameraPlaceType.h" },
				{ "None.Name", "ESSCameraPlaceType::None" },
				{ "Place06.Name", "ESSCameraPlaceType::Place06" },
				{ "Place07.Name", "ESSCameraPlaceType::Place07" },
				{ "Place08.Name", "ESSCameraPlaceType::Place08" },
				{ "Place09.Name", "ESSCameraPlaceType::Place09" },
				{ "Place10.Name", "ESSCameraPlaceType::Place10" },
				{ "Ring.Name", "ESSCameraPlaceType::Ring" },
				{ "Room.Name", "ESSCameraPlaceType::Room" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCameraPlaceType",
				"ESSCameraPlaceType",
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
