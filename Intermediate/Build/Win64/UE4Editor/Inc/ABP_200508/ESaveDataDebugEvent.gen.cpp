// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESaveDataDebugEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataDebugEvent() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataDebugEvent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESaveDataDebugEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESaveDataDebugEvent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESaveDataDebugEvent"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESaveDataDebugEvent>()
	{
		return ESaveDataDebugEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataDebugEvent(ESaveDataDebugEvent_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESaveDataDebugEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESaveDataDebugEvent_Hash() { return 763307612U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataDebugEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataDebugEvent"), 0, Get_Z_Construct_UEnum_ABP_200508_ESaveDataDebugEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataDebugEvent::None", (int64)ESaveDataDebugEvent::None },
				{ "ESaveDataDebugEvent::OnClick_Login", (int64)ESaveDataDebugEvent::OnClick_Login },
				{ "ESaveDataDebugEvent::OnClick_Logout", (int64)ESaveDataDebugEvent::OnClick_Logout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESaveDataDebugEvent.h" },
				{ "None.Name", "ESaveDataDebugEvent::None" },
				{ "OnClick_Login.Name", "ESaveDataDebugEvent::OnClick_Login" },
				{ "OnClick_Logout.Name", "ESaveDataDebugEvent::OnClick_Logout" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESaveDataDebugEvent",
				"ESaveDataDebugEvent",
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
