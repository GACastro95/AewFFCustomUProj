// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSCachedTransferCreateOptionBit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSCachedTransferCreateOptionBit() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCachedTransferCreateOptionBit();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSCachedTransferCreateOptionBit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSCachedTransferCreateOptionBit, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSCachedTransferCreateOptionBit"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSCachedTransferCreateOptionBit>()
	{
		return EEOSCachedTransferCreateOptionBit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSCachedTransferCreateOptionBit(EEOSCachedTransferCreateOptionBit_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSCachedTransferCreateOptionBit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSCachedTransferCreateOptionBit_Hash() { return 3331504700U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCachedTransferCreateOptionBit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSCachedTransferCreateOptionBit"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSCachedTransferCreateOptionBit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSCachedTransferCreateOptionBit::None", (int64)EEOSCachedTransferCreateOptionBit::None },
				{ "EEOSCachedTransferCreateOptionBit::ManageInstance", (int64)EEOSCachedTransferCreateOptionBit::ManageInstance },
				{ "EEOSCachedTransferCreateOptionBit::ManageSocketID", (int64)EEOSCachedTransferCreateOptionBit::ManageSocketID },
				{ "EEOSCachedTransferCreateOptionBit::ManageChannel", (int64)EEOSCachedTransferCreateOptionBit::ManageChannel },
				{ "EEOSCachedTransferCreateOptionBit::ManageAll", (int64)EEOSCachedTransferCreateOptionBit::ManageAll },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ManageAll.Name", "EEOSCachedTransferCreateOptionBit::ManageAll" },
				{ "ManageChannel.Name", "EEOSCachedTransferCreateOptionBit::ManageChannel" },
				{ "ManageInstance.Name", "EEOSCachedTransferCreateOptionBit::ManageInstance" },
				{ "ManageSocketID.Name", "EEOSCachedTransferCreateOptionBit::ManageSocketID" },
				{ "ModuleRelativePath", "Public/EEOSCachedTransferCreateOptionBit.h" },
				{ "None.Name", "EEOSCachedTransferCreateOptionBit::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSCachedTransferCreateOptionBit",
				"EEOSCachedTransferCreateOptionBit",
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
