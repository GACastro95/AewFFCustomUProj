// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetworkFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetworkFunctionLibrary() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkFunctionLibrary_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execGetELReplicationManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELReplicationManager**)Z_Param__Result=UELNetworkFunctionLibrary::GetELReplicationManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execGetFirstLocalPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UELNetworkFunctionLibrary::GetFirstLocalPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execGetOwningCharacterIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELNetworkFunctionLibrary::GetOwningCharacterIndex(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execGetOwningPlayerIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELNetworkFunctionLibrary::GetOwningPlayerIndex(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execIsInOnlineGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELNetworkFunctionLibrary::IsInOnlineGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execIsInOnlineGameModeMenu)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELNetworkFunctionLibrary::IsInOnlineGameModeMenu(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkFunctionLibrary::execIsNetworkAvailable)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELNetworkFunctionLibrary::IsNetworkAvailable(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UELNetworkFunctionLibrary::StaticRegisterNativesUELNetworkFunctionLibrary()
	{
		UClass* Class = UELNetworkFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetELReplicationManager", &UELNetworkFunctionLibrary::execGetELReplicationManager },
			{ "GetFirstLocalPlayerController", &UELNetworkFunctionLibrary::execGetFirstLocalPlayerController },
			{ "GetOwningCharacterIndex", &UELNetworkFunctionLibrary::execGetOwningCharacterIndex },
			{ "GetOwningPlayerIndex", &UELNetworkFunctionLibrary::execGetOwningPlayerIndex },
			{ "IsInOnlineGameMode", &UELNetworkFunctionLibrary::execIsInOnlineGameMode },
			{ "IsInOnlineGameModeMenu", &UELNetworkFunctionLibrary::execIsInOnlineGameModeMenu },
			{ "IsNetworkAvailable", &UELNetworkFunctionLibrary::execIsNetworkAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics
	{
		struct ELNetworkFunctionLibrary_eventGetELReplicationManager_Parms
		{
			const UObject* WorldContextObject;
			UELReplicationManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetELReplicationManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetELReplicationManager_Parms, ReturnValue), Z_Construct_UClass_UELReplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "GetELReplicationManager", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventGetELReplicationManager_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics
	{
		struct ELNetworkFunctionLibrary_eventGetFirstLocalPlayerController_Parms
		{
			const UObject* WorldContextObject;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetFirstLocalPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetFirstLocalPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "GetFirstLocalPlayerController", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventGetFirstLocalPlayerController_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics
	{
		struct ELNetworkFunctionLibrary_eventGetOwningCharacterIndex_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetOwningCharacterIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetOwningCharacterIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "GetOwningCharacterIndex", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventGetOwningCharacterIndex_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics
	{
		struct ELNetworkFunctionLibrary_eventGetOwningPlayerIndex_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetOwningPlayerIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventGetOwningPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "GetOwningPlayerIndex", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventGetOwningPlayerIndex_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics
	{
		struct ELNetworkFunctionLibrary_eventIsInOnlineGameMode_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventIsInOnlineGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetworkFunctionLibrary_eventIsInOnlineGameMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkFunctionLibrary_eventIsInOnlineGameMode_Parms), &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "IsInOnlineGameMode", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventIsInOnlineGameMode_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics
	{
		struct ELNetworkFunctionLibrary_eventIsInOnlineGameModeMenu_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventIsInOnlineGameModeMenu_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetworkFunctionLibrary_eventIsInOnlineGameModeMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkFunctionLibrary_eventIsInOnlineGameModeMenu_Parms), &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "IsInOnlineGameModeMenu", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventIsInOnlineGameModeMenu_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics
	{
		struct ELNetworkFunctionLibrary_eventIsNetworkAvailable_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkFunctionLibrary_eventIsNetworkAvailable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetworkFunctionLibrary_eventIsNetworkAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkFunctionLibrary_eventIsNetworkAvailable_Parms), &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkFunctionLibrary, nullptr, "IsNetworkAvailable", nullptr, nullptr, sizeof(ELNetworkFunctionLibrary_eventIsNetworkAvailable_Parms), Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELNetworkFunctionLibrary_NoRegister()
	{
		return UELNetworkFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UELNetworkFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_GetELReplicationManager, "GetELReplicationManager" }, // 334800925
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_GetFirstLocalPlayerController, "GetFirstLocalPlayerController" }, // 2219401066
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningCharacterIndex, "GetOwningCharacterIndex" }, // 4202901034
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_GetOwningPlayerIndex, "GetOwningPlayerIndex" }, // 627539060
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameMode, "IsInOnlineGameMode" }, // 226411531
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsInOnlineGameModeMenu, "IsInOnlineGameModeMenu" }, // 1655744340
		{ &Z_Construct_UFunction_UELNetworkFunctionLibrary_IsNetworkAvailable, "IsNetworkAvailable" }, // 2069488954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetworkFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetworkFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNetworkFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::ClassParams = {
		&UELNetworkFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetworkFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetworkFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetworkFunctionLibrary, 3628160435);
	template<> ABP_200508_API UClass* StaticClass<UELNetworkFunctionLibrary>()
	{
		return UELNetworkFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetworkFunctionLibrary(Z_Construct_UClass_UELNetworkFunctionLibrary, &UELNetworkFunctionLibrary::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetworkFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetworkFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
