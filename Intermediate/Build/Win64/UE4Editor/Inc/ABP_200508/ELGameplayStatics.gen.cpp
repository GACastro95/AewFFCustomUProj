// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameplayStatics() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameplayStatics_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGameplayStatics::execCreatePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL(Z_Param_bSpawnPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UELGameplayStatics::CreatePlayer(Z_Param_WorldContextObject,Z_Param_ControllerId,Z_Param_bSpawnPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerCameraManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=UELGameplayStatics::GetPlayerCameraManager(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UELGameplayStatics::GetPlayerCharacter(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UELGameplayStatics::GetPlayerController(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerControllerFromID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UELGameplayStatics::GetPlayerControllerFromID(Z_Param_WorldContextObject,Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerControllerID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELGameplayStatics::GetPlayerControllerID(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execGetPlayerPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UELGameplayStatics::GetPlayerPawn(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execHasGameViewportFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELGameplayStatics::HasGameViewportFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayStatics::execSetPlayerControllerID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELGameplayStatics::SetPlayerControllerID(Z_Param_Player,Z_Param_ControllerId);
		P_NATIVE_END;
	}
	void UELGameplayStatics::StaticRegisterNativesUELGameplayStatics()
	{
		UClass* Class = UELGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlayer", &UELGameplayStatics::execCreatePlayer },
			{ "GetPlayerCameraManager", &UELGameplayStatics::execGetPlayerCameraManager },
			{ "GetPlayerCharacter", &UELGameplayStatics::execGetPlayerCharacter },
			{ "GetPlayerController", &UELGameplayStatics::execGetPlayerController },
			{ "GetPlayerControllerFromID", &UELGameplayStatics::execGetPlayerControllerFromID },
			{ "GetPlayerControllerID", &UELGameplayStatics::execGetPlayerControllerID },
			{ "GetPlayerPawn", &UELGameplayStatics::execGetPlayerPawn },
			{ "HasGameViewportFocus", &UELGameplayStatics::execHasGameViewportFocus },
			{ "SetPlayerControllerID", &UELGameplayStatics::execSetPlayerControllerID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics
	{
		struct ELGameplayStatics_eventCreatePlayer_Parms
		{
			const UObject* WorldContextObject;
			int32 ControllerId;
			bool bSpawnPlayerController;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_bSpawnPlayerController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnPlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventCreatePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventCreatePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController_SetBit(void* Obj)
	{
		((ELGameplayStatics_eventCreatePlayer_Parms*)Obj)->bSpawnPlayerController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController = { "bSpawnPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameplayStatics_eventCreatePlayer_Parms), &Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventCreatePlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "CreatePlayer", nullptr, nullptr, sizeof(ELGameplayStatics_eventCreatePlayer_Parms), Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_CreatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_CreatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics
	{
		struct ELGameplayStatics_eventGetPlayerCameraManager_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APlayerCameraManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCameraManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCameraManager_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerCameraManager", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerCameraManager_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics
	{
		struct ELGameplayStatics_eventGetPlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			ACharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCharacter_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerCharacter", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerCharacter_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics
	{
		struct ELGameplayStatics_eventGetPlayerController_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerController_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerController", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerController_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics
	{
		struct ELGameplayStatics_eventGetPlayerControllerFromID_Parms
		{
			const UObject* WorldContextObject;
			int32 ControllerId;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerControllerFromID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerControllerFromID_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerControllerFromID_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerControllerFromID", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerControllerFromID_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics
	{
		struct ELGameplayStatics_eventGetPlayerControllerID_Parms
		{
			APlayerController* Player;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerControllerID_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerControllerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerControllerID", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerControllerID_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics
	{
		struct ELGameplayStatics_eventGetPlayerPawn_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			APawn* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerPawn_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "GetPlayerPawn", nullptr, nullptr, sizeof(ELGameplayStatics_eventGetPlayerPawn_Parms), Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics
	{
		struct ELGameplayStatics_eventHasGameViewportFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameplayStatics_eventHasGameViewportFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameplayStatics_eventHasGameViewportFocus_Parms), &Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "HasGameViewportFocus", nullptr, nullptr, sizeof(ELGameplayStatics_eventHasGameViewportFocus_Parms), Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics
	{
		struct ELGameplayStatics_eventSetPlayerControllerID_Parms
		{
			APlayerController* Player;
			int32 ControllerId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventSetPlayerControllerID_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayStatics_eventSetPlayerControllerID_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayStatics, nullptr, "SetPlayerControllerID", nullptr, nullptr, sizeof(ELGameplayStatics_eventSetPlayerControllerID_Parms), Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameplayStatics_NoRegister()
	{
		return UELGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UELGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameplayStatics_CreatePlayer, "CreatePlayer" }, // 1671690849
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 1721818394
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerCharacter, "GetPlayerCharacter" }, // 3199705549
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerController, "GetPlayerController" }, // 3121531872
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerFromID, "GetPlayerControllerFromID" }, // 3516504907
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerControllerID, "GetPlayerControllerID" }, // 839778001
		{ &Z_Construct_UFunction_UELGameplayStatics_GetPlayerPawn, "GetPlayerPawn" }, // 3505520795
		{ &Z_Construct_UFunction_UELGameplayStatics_HasGameViewportFocus, "HasGameViewportFocus" }, // 4238193216
		{ &Z_Construct_UFunction_UELGameplayStatics_SetPlayerControllerID, "SetPlayerControllerID" }, // 2975306129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameplayStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameplayStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameplayStatics_Statics::ClassParams = {
		&UELGameplayStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameplayStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameplayStatics, 103035626);
	template<> ABP_200508_API UClass* StaticClass<UELGameplayStatics>()
	{
		return UELGameplayStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameplayStatics(Z_Construct_UClass_UELGameplayStatics, &UELGameplayStatics::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
