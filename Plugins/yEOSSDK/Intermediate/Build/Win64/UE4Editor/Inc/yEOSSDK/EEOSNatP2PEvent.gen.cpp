// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSNatP2PEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSNatP2PEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSNatP2PEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSNatP2PEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSNatP2PEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatP2PEvent>()
	{
		return EEOSNatP2PEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSNatP2PEvent(EEOSNatP2PEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSNatP2PEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSNatP2PEvent_Hash() { return 2292597694U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSNatP2PEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSNatP2PEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSNatP2PEvent::GetNatType", (int64)EEOSNatP2PEvent::GetNatType },
				{ "EEOSNatP2PEvent::GetNatTypeErr", (int64)EEOSNatP2PEvent::GetNatTypeErr },
				{ "EEOSNatP2PEvent::ConfirmConnection", (int64)EEOSNatP2PEvent::ConfirmConnection },
				{ "EEOSNatP2PEvent::Connection", (int64)EEOSNatP2PEvent::Connection },
				{ "EEOSNatP2PEvent::ConnectionErrSocketID", (int64)EEOSNatP2PEvent::ConnectionErrSocketID },
				{ "EEOSNatP2PEvent::ConnectionErrUnknownUser", (int64)EEOSNatP2PEvent::ConnectionErrUnknownUser },
				{ "EEOSNatP2PEvent::ConnectionErr", (int64)EEOSNatP2PEvent::ConnectionErr },
				{ "EEOSNatP2PEvent::Closed", (int64)EEOSNatP2PEvent::Closed },
				{ "EEOSNatP2PEvent::ClosedErr", (int64)EEOSNatP2PEvent::ClosedErr },
				{ "EEOSNatP2PEvent::ClosedSocket", (int64)EEOSNatP2PEvent::ClosedSocket },
				{ "EEOSNatP2PEvent::ClosedSocketErr", (int64)EEOSNatP2PEvent::ClosedSocketErr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closed.Name", "EEOSNatP2PEvent::Closed" },
				{ "ClosedErr.Name", "EEOSNatP2PEvent::ClosedErr" },
				{ "ClosedSocket.Name", "EEOSNatP2PEvent::ClosedSocket" },
				{ "ClosedSocketErr.Name", "EEOSNatP2PEvent::ClosedSocketErr" },
				{ "ConfirmConnection.Name", "EEOSNatP2PEvent::ConfirmConnection" },
				{ "Connection.Name", "EEOSNatP2PEvent::Connection" },
				{ "ConnectionErr.Name", "EEOSNatP2PEvent::ConnectionErr" },
				{ "ConnectionErrSocketID.Name", "EEOSNatP2PEvent::ConnectionErrSocketID" },
				{ "ConnectionErrUnknownUser.Name", "EEOSNatP2PEvent::ConnectionErrUnknownUser" },
				{ "GetNatType.Name", "EEOSNatP2PEvent::GetNatType" },
				{ "GetNatTypeErr.Name", "EEOSNatP2PEvent::GetNatTypeErr" },
				{ "ModuleRelativePath", "Public/EEOSNatP2PEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSNatP2PEvent",
				"EEOSNatP2PEvent",
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
