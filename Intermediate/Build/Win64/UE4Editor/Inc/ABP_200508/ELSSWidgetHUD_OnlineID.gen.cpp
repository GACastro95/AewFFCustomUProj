// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_OnlineID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_OnlineID() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineID_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineID();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execIsValidScreenPos)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InCanvasPos);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidScreenPos(Z_Param_InCanvasPos,Z_Param_inScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execSetCarrotMedal)
	{
		P_GET_UBOOL(Z_Param_InHasCarrot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCarrotMedal(Z_Param_InHasCarrot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execSetTargetActorandOnlineID)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_InOnlineID);
		P_GET_UBOOL(Z_Param_InHasCarrot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActorandOnlineID(Z_Param_inTargetActor,Z_Param_InOnlineID,Z_Param_InHasCarrot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execSetVisibleText)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleText(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execShowOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineID::execUpdatePosAndVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePosAndVisible();
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_OnlineID_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_OnlineID::Init(APlayerController* NewPlayerController)
	{
		ELSSWidgetHUD_OnlineID_eventInit_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OnlineID_Init),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OnlineID_RequestRender = FName(TEXT("RequestRender"));
	void UELSSWidgetHUD_OnlineID::RequestRender()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OnlineID_RequestRender),NULL);
	}
	static FName NAME_UELSSWidgetHUD_OnlineID_SetOnlineID = FName(TEXT("SetOnlineID"));
	void UELSSWidgetHUD_OnlineID::SetOnlineID(const FString& InOnlineID)
	{
		ELSSWidgetHUD_OnlineID_eventSetOnlineID_Parms Parms;
		Parms.InOnlineID=InOnlineID;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OnlineID_SetOnlineID),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OnlineID_UpdateOffset = FName(TEXT("UpdateOffset"));
	void UELSSWidgetHUD_OnlineID::UpdateOffset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OnlineID_UpdateOffset),NULL);
	}
	void UELSSWidgetHUD_OnlineID::StaticRegisterNativesUELSSWidgetHUD_OnlineID()
	{
		UClass* Class = UELSSWidgetHUD_OnlineID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetActor", &UELSSWidgetHUD_OnlineID::execGetTargetActor },
			{ "IsValidScreenPos", &UELSSWidgetHUD_OnlineID::execIsValidScreenPos },
			{ "SetCarrotMedal", &UELSSWidgetHUD_OnlineID::execSetCarrotMedal },
			{ "SetTargetActorandOnlineID", &UELSSWidgetHUD_OnlineID::execSetTargetActorandOnlineID },
			{ "SetVisibleText", &UELSSWidgetHUD_OnlineID::execSetVisibleText },
			{ "ShowOff", &UELSSWidgetHUD_OnlineID::execShowOff },
			{ "Update", &UELSSWidgetHUD_OnlineID::execUpdate },
			{ "UpdatePosAndVisible", &UELSSWidgetHUD_OnlineID::execUpdatePosAndVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventGetTargetActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventGetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventInit_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "Init", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventInit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms
		{
			FVector2D InCanvasPos;
			float inScale;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCanvasPos;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_InCanvasPos = { "InCanvasPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms, InCanvasPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_inScale = { "inScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms, inScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_InCanvasPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_inScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "IsValidScreenPos", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventIsValidScreenPos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "RequestRender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventSetCarrotMedal_Parms
		{
			bool InHasCarrot;
		};
		static void NewProp_InHasCarrot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHasCarrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::NewProp_InHasCarrot_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineID_eventSetCarrotMedal_Parms*)Obj)->InHasCarrot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::NewProp_InHasCarrot = { "InHasCarrot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineID_eventSetCarrotMedal_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::NewProp_InHasCarrot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::NewProp_InHasCarrot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "SetCarrotMedal", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventSetCarrotMedal_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOnlineID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InOnlineID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::NewProp_InOnlineID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::NewProp_InOnlineID = { "InOnlineID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventSetOnlineID_Parms, InOnlineID), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::NewProp_InOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::NewProp_InOnlineID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::NewProp_InOnlineID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "SetOnlineID", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventSetOnlineID_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms
		{
			AActor* inTargetActor;
			FString InOnlineID;
			bool InHasCarrot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOnlineID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InOnlineID;
		static void NewProp_InHasCarrot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHasCarrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InOnlineID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InOnlineID = { "InOnlineID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms, InOnlineID), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InOnlineID_MetaData)) };
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InHasCarrot_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms*)Obj)->InHasCarrot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InHasCarrot = { "InHasCarrot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InHasCarrot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InOnlineID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::NewProp_InHasCarrot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "SetTargetActorandOnlineID", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventSetTargetActorandOnlineID_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventSetVisibleText_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineID_eventSetVisibleText_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineID_eventSetVisibleText_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "SetVisibleText", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventSetVisibleText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "ShowOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics
	{
		struct ELSSWidgetHUD_OnlineID_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineID_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineID_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "UpdateOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineID, nullptr, "UpdatePosAndVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineID_NoRegister()
	{
		return UELSSWidgetHUD_OnlineID::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedalWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MedalWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmpOnlineID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tmpOnlineID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Validratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Validratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoneFirstVisible_MetaData[];
#endif
		static void NewProp_DoneFirstVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoneFirstVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_GetTargetActor, "GetTargetActor" }, // 3617672465
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Init, "Init" }, // 200717219
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_IsValidScreenPos, "IsValidScreenPos" }, // 3454901583
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_RequestRender, "RequestRender" }, // 4245839309
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetCarrotMedal, "SetCarrotMedal" }, // 264723615
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetOnlineID, "SetOnlineID" }, // 4193408713
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetTargetActorandOnlineID, "SetTargetActorandOnlineID" }, // 3216935156
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_SetVisibleText, "SetVisibleText" }, // 1087577008
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_ShowOff, "ShowOff" }, // 3655184001
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_Update, "Update" }, // 1132435083
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdateOffset, "UpdateOffset" }, // 326890278
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineID_UpdatePosAndVisible, "UpdatePosAndVisible" }, // 2321091517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_OnlineID.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TextWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TextWidget = { "TextWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, TextWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TextWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TextWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_MedalWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_MedalWidget = { "MedalWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, MedalWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_MedalWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_MedalWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_ActorOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_ActorOffset = { "ActorOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, ActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_ActorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_ActorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_tmpOnlineID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_tmpOnlineID = { "tmpOnlineID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, tmpOnlineID), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_tmpOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_tmpOnlineID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Validratio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Validratio = { "Validratio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineID, Validratio), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Validratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Validratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineID" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineID.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_OnlineID*)Obj)->DoneFirstVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible = { "DoneFirstVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_OnlineID), &Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TextWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_MedalWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_ActorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_tmpOnlineID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_Validratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::NewProp_DoneFirstVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_OnlineID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::ClassParams = {
		&UELSSWidgetHUD_OnlineID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_OnlineID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_OnlineID, 921961547);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_OnlineID>()
	{
		return UELSSWidgetHUD_OnlineID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_OnlineID(Z_Construct_UClass_UELSSWidgetHUD_OnlineID, &UELSSWidgetHUD_OnlineID::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_OnlineID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_OnlineID);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
