// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_InteractPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_InteractPoint() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPoint();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_inTargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execSetVisibleText)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleText(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execShowOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->UpdatePos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPoint::execUpdateShow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShow(Z_Param_inDistance,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_InteractPoint_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_InteractPoint::Init(APlayerController* NewPlayerController)
	{
		ELSSWidgetHUD_InteractPoint_eventInit_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InteractPoint_Init),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_InteractPoint_UpdateOffset = FName(TEXT("UpdateOffset"));
	void UELSSWidgetHUD_InteractPoint::UpdateOffset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_InteractPoint_UpdateOffset),NULL);
	}
	void UELSSWidgetHUD_InteractPoint::StaticRegisterNativesUELSSWidgetHUD_InteractPoint()
	{
		UClass* Class = UELSSWidgetHUD_InteractPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetActor", &UELSSWidgetHUD_InteractPoint::execGetTargetActor },
			{ "SetTargetActor", &UELSSWidgetHUD_InteractPoint::execSetTargetActor },
			{ "SetVisibleText", &UELSSWidgetHUD_InteractPoint::execSetVisibleText },
			{ "ShowOff", &UELSSWidgetHUD_InteractPoint::execShowOff },
			{ "Update", &UELSSWidgetHUD_InteractPoint::execUpdate },
			{ "UpdatePos", &UELSSWidgetHUD_InteractPoint::execUpdatePos },
			{ "UpdateShow", &UELSSWidgetHUD_InteractPoint::execUpdateShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventGetTargetActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventGetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventInit_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "Init", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventInit_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventSetTargetActor_Parms
		{
			AActor* inTargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventSetTargetActor_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::NewProp_inTargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventSetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventSetVisibleText_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InteractPoint_eventSetVisibleText_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InteractPoint_eventSetVisibleText_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "SetVisibleText", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventSetVisibleText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "ShowOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "UpdateOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventUpdatePos_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventUpdatePos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "UpdatePos", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventUpdatePos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics
	{
		struct ELSSWidgetHUD_InteractPoint_eventUpdateShow_Parms
		{
			float inDistance;
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventUpdateShow_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPoint_eventUpdateShow_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, nullptr, "UpdateShow", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPoint_eventUpdateShow_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_NoRegister()
	{
		return UELSSWidgetHUD_InteractPoint::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_GetTargetActor, "GetTargetActor" }, // 2226516842
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Init, "Init" }, // 1218271789
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetTargetActor, "SetTargetActor" }, // 890946282
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_SetVisibleText, "SetVisibleText" }, // 2772445267
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_ShowOff, "ShowOff" }, // 1912946087
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_Update, "Update" }, // 3925660878
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateOffset, "UpdateOffset" }, // 1985392265
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdatePos, "UpdatePos" }, // 2104163583
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPoint_UpdateShow, "UpdateShow" }, // 3730618303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_InteractPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TextWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TextWidget = { "TextWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, TextWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TextWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TextWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_MaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TextWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_InteractPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::ClassParams = {
		&UELSSWidgetHUD_InteractPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_InteractPoint, 2286121074);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_InteractPoint>()
	{
		return UELSSWidgetHUD_InteractPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_InteractPoint(Z_Construct_UClass_UELSSWidgetHUD_InteractPoint, &UELSSWidgetHUD_InteractPoint::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_InteractPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_InteractPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
