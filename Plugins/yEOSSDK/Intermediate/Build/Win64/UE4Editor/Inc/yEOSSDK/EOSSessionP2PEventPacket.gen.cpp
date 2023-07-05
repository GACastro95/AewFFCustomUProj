// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PEventPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PEventPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PEventPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PEventPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PEventPacket::execGetNotificationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionNotificationType*)Z_Param__Result=P_THIS->GetNotificationType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PEventPacket::execGetTargetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTargetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PEventPacket::execSetNotificationType)
	{
		P_GET_ENUM(EEOSSessionNotificationType,Z_Param__enNotificationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationType(EEOSSessionNotificationType(Z_Param__enNotificationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PEventPacket::execSetNotificationWithPUID)
	{
		P_GET_ENUM(EEOSSessionNotificationType,Z_Param__enNotificationType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotificationWithPUID(EEOSSessionNotificationType(Z_Param__enNotificationType),Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	void UEOSSessionP2PEventPacket::StaticRegisterNativesUEOSSessionP2PEventPacket()
	{
		UClass* Class = UEOSSessionP2PEventPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotificationType", &UEOSSessionP2PEventPacket::execGetNotificationType },
			{ "GetTargetProductUserID", &UEOSSessionP2PEventPacket::execGetTargetProductUserID },
			{ "SetNotificationType", &UEOSSessionP2PEventPacket::execSetNotificationType },
			{ "SetNotificationWithPUID", &UEOSSessionP2PEventPacket::execSetNotificationWithPUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics
	{
		struct EOSSessionP2PEventPacket_eventGetNotificationType_Parms
		{
			EEOSSessionNotificationType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PEventPacket_eventGetNotificationType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PEventPacket, nullptr, "GetNotificationType", nullptr, nullptr, sizeof(EOSSessionP2PEventPacket_eventGetNotificationType_Parms), Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics
	{
		struct EOSSessionP2PEventPacket_eventGetTargetProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PEventPacket_eventGetTargetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PEventPacket, nullptr, "GetTargetProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PEventPacket_eventGetTargetProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics
	{
		struct EOSSessionP2PEventPacket_eventSetNotificationType_Parms
		{
			EEOSSessionNotificationType _enNotificationType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enNotificationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enNotificationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::NewProp__enNotificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::NewProp__enNotificationType = { "_enNotificationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PEventPacket_eventSetNotificationType_Parms, _enNotificationType), Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::NewProp__enNotificationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::NewProp__enNotificationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PEventPacket, nullptr, "SetNotificationType", nullptr, nullptr, sizeof(EOSSessionP2PEventPacket_eventSetNotificationType_Parms), Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics
	{
		struct EOSSessionP2PEventPacket_eventSetNotificationWithPUID_Parms
		{
			EEOSSessionNotificationType _enNotificationType;
			FString _strProductUserID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enNotificationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enNotificationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__enNotificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__enNotificationType = { "_enNotificationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PEventPacket_eventSetNotificationWithPUID_Parms, _enNotificationType), Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PEventPacket_eventSetNotificationWithPUID_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__enNotificationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__enNotificationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::NewProp__strProductUserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PEventPacket, nullptr, "SetNotificationWithPUID", nullptr, nullptr, sizeof(EOSSessionP2PEventPacket_eventSetNotificationWithPUID_Parms), Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PEventPacket_NoRegister()
	{
		return UEOSSessionP2PEventPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetNotificationType, "GetNotificationType" }, // 2051395649
		{ &Z_Construct_UFunction_UEOSSessionP2PEventPacket_GetTargetProductUserID, "GetTargetProductUserID" }, // 1633971957
		{ &Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationType, "SetNotificationType" }, // 1856019929
		{ &Z_Construct_UFunction_UEOSSessionP2PEventPacket_SetNotificationWithPUID, "SetNotificationWithPUID" }, // 545245644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PEventPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PEventPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PEventPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::ClassParams = {
		&UEOSSessionP2PEventPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PEventPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PEventPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PEventPacket, 1098083459);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PEventPacket>()
	{
		return UEOSSessionP2PEventPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PEventPacket(Z_Construct_UClass_UEOSSessionP2PEventPacket, &UEOSSessionP2PEventPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PEventPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PEventPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
