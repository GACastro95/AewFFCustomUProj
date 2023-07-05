// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_Interact() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Interact_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Interact();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractExecute();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Vehicle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execGetInteractParam)
	{
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_GET_UBOOL_REF(Z_Param_Out_Hold);
		P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_Color);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInteractParam(ESSInteractExecute(Z_Param_InType),Z_Param_Out_Hold,Z_Param_Out_Color,Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execSetInventoryItem)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInventoryItemID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInventoryItemDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryItem(ESSInteractOperate(Z_Param_InInteractOperate),ESSInteractExecute(Z_Param_InType),Z_Param_InInventoryItemID,Z_Param_InInventoryItemDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_inTargetActor,Z_Param_Out_InOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execSetVisibleAllInteract)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleAllInteract(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execSetVisibleToItemInteract)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleToItemInteract(ESSInteractOperate(Z_Param_InInteractOperate),ESSInteractExecute(Z_Param_InType),Z_Param_InPickupID,Z_Param_InPickupDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Interact::execUpdateOpacityAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOpacityAnimation(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_Interact_ApplyRatio = FName(TEXT("ApplyRatio"));
	void UELSSWidgetHUD_Interact::ApplyRatio(float InRatio)
	{
		ELSSWidgetHUD_Interact_eventApplyRatio_Parms Parms;
		Parms.InRatio=InRatio;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Interact_ApplyRatio),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont = FName(TEXT("ApplyWatchGameModeGeneralFont"));
	void UELSSWidgetHUD_Interact::ApplyWatchGameModeGeneralFont()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont),NULL);
	}
	static FName NAME_UELSSWidgetHUD_Interact_OnFinishOut = FName(TEXT("OnFinishOut"));
	void UELSSWidgetHUD_Interact::OnFinishOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Interact_OnFinishOut),NULL);
	}
	static FName NAME_UELSSWidgetHUD_Interact_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_Interact::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_Interact_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Interact_SetKeyConfig),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_Interact_SetVisibleToInteract = FName(TEXT("SetVisibleToInteract"));
	void UELSSWidgetHUD_Interact::SetVisibleToInteract(ESSInteractExecute InType)
	{
		ELSSWidgetHUD_Interact_eventSetVisibleToInteract_Parms Parms;
		Parms.InType=InType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Interact_SetVisibleToInteract),&Parms);
	}
	void UELSSWidgetHUD_Interact::StaticRegisterNativesUELSSWidgetHUD_Interact()
	{
		UClass* Class = UELSSWidgetHUD_Interact::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_Interact::execApplyWatchGameMode },
			{ "GetInteractParam", &UELSSWidgetHUD_Interact::execGetInteractParam },
			{ "SetInventoryItem", &UELSSWidgetHUD_Interact::execSetInventoryItem },
			{ "SetTargetActor", &UELSSWidgetHUD_Interact::execSetTargetActor },
			{ "SetVisibleAllInteract", &UELSSWidgetHUD_Interact::execSetVisibleAllInteract },
			{ "SetVisibleToItemInteract", &UELSSWidgetHUD_Interact::execSetVisibleToItemInteract },
			{ "Update", &UELSSWidgetHUD_Interact::execUpdate },
			{ "UpdateOpacityAnimation", &UELSSWidgetHUD_Interact::execUpdateOpacityAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventApplyRatio_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "ApplyRatio", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventApplyRatio_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "ApplyWatchGameModeGeneralFont", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics
	{
		struct ELSSWidgetHUD_Interact_eventGetInteractParam_Parms
		{
			ESSInteractExecute InType;
			bool Hold;
			FSlateColor Color;
			FString Text;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_Hold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hold;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventGetInteractParam_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Hold_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Interact_eventGetInteractParam_Parms*)Obj)->Hold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Interact_eventGetInteractParam_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventGetInteractParam_Parms, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventGetInteractParam_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Hold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "GetInteractParam", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventGetInteractParam_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "OnFinishOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics
	{
		struct ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSInteractExecute InType;
			int32 InInventoryItemID;
			int32 InInventoryItemDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInventoryItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInventoryItemDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInventoryItemID = { "InInventoryItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms, InInventoryItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInventoryItemDurability = { "InInventoryItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms, InInventoryItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInventoryItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::NewProp_InInventoryItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetInventoryItem", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetInventoryItem_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics
	{
		struct ELSSWidgetHUD_Interact_eventSetTargetActor_Parms
		{
			AActor* inTargetActor;
			FVector InOffset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetTargetActor_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_InOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetTargetActor_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_InOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_InOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics
	{
		struct ELSSWidgetHUD_Interact_eventSetVisibleAllInteract_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Interact_eventSetVisibleAllInteract_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Interact_eventSetVisibleAllInteract_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetVisibleAllInteract", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetVisibleAllInteract_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetVisibleToInteract_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetVisibleToInteract", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetVisibleToInteract_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics
	{
		struct ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSInteractExecute InType;
			int32 InPickupID;
			int32 InPickupDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InPickupID = { "InPickupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms, InPickupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InPickupDurability = { "InPickupDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms, InPickupDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InPickupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::NewProp_InPickupDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "SetVisibleToItemInteract", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventSetVisibleToItemInteract_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics
	{
		struct ELSSWidgetHUD_Interact_eventUpdateOpacityAnimation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Interact_eventUpdateOpacityAnimation_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Interact, nullptr, "UpdateOpacityAnimation", nullptr, nullptr, sizeof(ELSSWidgetHUD_Interact_eventUpdateOpacityAnimation_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Interact_NoRegister()
	{
		return UELSSWidgetHUD_Interact::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneralInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinisherColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInteractType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInteractType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreInteractType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpacityAnimation_MetaData[];
#endif
		static void NewProp_IsOpacityAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpacityAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreWorldPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreWorldPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VEHICLEGAUGEOFFSET_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VEHICLEGAUGEOFFSET;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeoutLengthTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeoutLengthTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyRatio, "ApplyRatio" }, // 748135069
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 3789670569
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_ApplyWatchGameModeGeneralFont, "ApplyWatchGameModeGeneralFont" }, // 2615267771
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_GetInteractParam, "GetInteractParam" }, // 3492282463
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_OnFinishOut, "OnFinishOut" }, // 3900790880
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetInventoryItem, "SetInventoryItem" }, // 3290084452
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetKeyConfig, "SetKeyConfig" }, // 455458930
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetTargetActor, "SetTargetActor" }, // 2094735928
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleAllInteract, "SetVisibleAllInteract" }, // 2774095024
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToInteract, "SetVisibleToInteract" }, // 2974396641
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_SetVisibleToItemInteract, "SetVisibleToItemInteract" }, // 1176309469
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_Update, "Update" }, // 3793588546
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Interact_UpdateOpacityAnimation, "UpdateOpacityAnimation" }, // 3990836705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_Interact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_GeneralInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_GeneralInteract = { "GeneralInteract", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, GeneralInteract), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_GeneralInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_GeneralInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_LayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_LayoutWidget = { "LayoutWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, LayoutWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_LayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_LayoutWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_ItemInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_ItemInteract = { "ItemInteract", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, ItemInteract), Z_Construct_UClass_UELSSWidgetHUD_ItemInteract_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_ItemInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_ItemInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VehicleGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VehicleGauge = { "VehicleGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, VehicleGauge), Z_Construct_UClass_UELSSWidgetHUD_Vehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VehicleGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VehicleGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FinisherColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FinisherColor = { "FinisherColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, FinisherColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FinisherColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FinisherColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, DefaultColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_DefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType = { "InteractType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, InteractType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType = { "PreInteractType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, PreInteractType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_OpacityElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_OpacityElapsed = { "OpacityElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, OpacityElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_OpacityElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_OpacityElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_Interact*)Obj)->IsOpacityAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation = { "IsOpacityAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_Interact), &Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreWorldPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreWorldPos = { "PreWorldPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, PreWorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreWorldPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreWorldPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VEHICLEGAUGEOFFSET_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VEHICLEGAUGEOFFSET = { "VEHICLEGAUGEOFFSET", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, VEHICLEGAUGEOFFSET), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VEHICLEGAUGEOFFSET_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VEHICLEGAUGEOFFSET_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FadeoutLengthTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Interact" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FadeoutLengthTime = { "FadeoutLengthTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Interact, FadeoutLengthTime), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FadeoutLengthTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FadeoutLengthTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_GeneralInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_LayoutWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_ItemInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VehicleGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FinisherColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_DefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_InteractType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreInteractType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_OpacityElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_IsOpacityAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_PreWorldPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_VEHICLEGAUGEOFFSET,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::NewProp_FadeoutLengthTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_Interact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::ClassParams = {
		&UELSSWidgetHUD_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Interact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_Interact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_Interact, 1624268062);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_Interact>()
	{
		return UELSSWidgetHUD_Interact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_Interact(Z_Construct_UClass_UELSSWidgetHUD_Interact, &UELSSWidgetHUD_Interact::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_Interact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_Interact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
