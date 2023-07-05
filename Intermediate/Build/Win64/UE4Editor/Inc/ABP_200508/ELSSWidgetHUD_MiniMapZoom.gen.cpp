// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_MiniMapZoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_MiniMapZoom() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execApplyAliveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAliveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAliveCount(Z_Param_InAliveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execApplyAreaShrinkTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAreaShrinkTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execApplyKOCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InKOCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyKOCount(Z_Param_InKOCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execCanvasPosToMaterialPos)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCanvasPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->CanvasPosToMaterialPos(Z_Param_Out_InCanvasPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execGetCanvasScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCanvasScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execGetEnemyVisibleDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnemyVisibleDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execGetFloor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZpos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFloor(Z_Param_InZpos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execGetItemBoxVisibleDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemBoxVisibleDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execIsTreasureBox)
	{
		P_GET_ENUM(ESSItemBoxType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTreasureBox(ESSItemBoxType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execIsUsingEnemySearchAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingEnemySearchAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execIsUsingItemBoxSearchAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingItemBoxSearchAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execPlayIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execPlayOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetAreaShrinkTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaShrinkTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetMinimapTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinimapID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapTexture(Z_Param_InMinimapID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetPlayerActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inPlayerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerActor(Z_Param_inPlayerActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetStormActor)
	{
		P_GET_OBJECT(AELSSStorm,Z_Param_InStormActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStormActor(Z_Param_InStormActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetVisibleAnnounceStormAndGuide)
	{
		P_GET_UBOOL(Z_Param_InIsShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleAnnounceStormAndGuide(Z_Param_InIsShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execSetVisibleOperationButton)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleOperationButton(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execShowOffIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOffIcons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateAnnounceGuide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnnounceGuide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateAnnounceStorm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnnounceStorm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateCarrotMedal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCarrotMedal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateHorseSaddle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHorseSaddle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateItemBoxAndTreasureBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemBoxAndTreasureBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdatePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execUpdateStormZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStormZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapZoom::execWorldPosToCanvasPos)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->WorldPosToCanvasPos(Z_Param_Out_InWorldPos);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_MiniMapZoom_CreateMarkers = FName(TEXT("CreateMarkers"));
	void UELSSWidgetHUD_MiniMapZoom::CreateMarkers()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MiniMapZoom_CreateMarkers),NULL);
	}
	static FName NAME_UELSSWidgetHUD_MiniMapZoom_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_MiniMapZoom::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MiniMapZoom_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_MiniMapZoom::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_MiniMapZoom_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig),&Parms);
	}
	void UELSSWidgetHUD_MiniMapZoom::StaticRegisterNativesUELSSWidgetHUD_MiniMapZoom()
	{
		UClass* Class = UELSSWidgetHUD_MiniMapZoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAliveCount", &UELSSWidgetHUD_MiniMapZoom::execApplyAliveCount },
			{ "ApplyAreaShrinkTime", &UELSSWidgetHUD_MiniMapZoom::execApplyAreaShrinkTime },
			{ "ApplyKOCount", &UELSSWidgetHUD_MiniMapZoom::execApplyKOCount },
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_MiniMapZoom::execApplyWatchGameMode },
			{ "CanvasPosToMaterialPos", &UELSSWidgetHUD_MiniMapZoom::execCanvasPosToMaterialPos },
			{ "GetCanvasScale", &UELSSWidgetHUD_MiniMapZoom::execGetCanvasScale },
			{ "GetEnemyVisibleDistance", &UELSSWidgetHUD_MiniMapZoom::execGetEnemyVisibleDistance },
			{ "GetFloor", &UELSSWidgetHUD_MiniMapZoom::execGetFloor },
			{ "GetItemBoxVisibleDistance", &UELSSWidgetHUD_MiniMapZoom::execGetItemBoxVisibleDistance },
			{ "IsTreasureBox", &UELSSWidgetHUD_MiniMapZoom::execIsTreasureBox },
			{ "IsUsingEnemySearchAbility", &UELSSWidgetHUD_MiniMapZoom::execIsUsingEnemySearchAbility },
			{ "IsUsingItemBoxSearchAbility", &UELSSWidgetHUD_MiniMapZoom::execIsUsingItemBoxSearchAbility },
			{ "PlayIn", &UELSSWidgetHUD_MiniMapZoom::execPlayIn },
			{ "PlayOut", &UELSSWidgetHUD_MiniMapZoom::execPlayOut },
			{ "SetAreaShrinkTime", &UELSSWidgetHUD_MiniMapZoom::execSetAreaShrinkTime },
			{ "SetMinimapTexture", &UELSSWidgetHUD_MiniMapZoom::execSetMinimapTexture },
			{ "SetPlayerActor", &UELSSWidgetHUD_MiniMapZoom::execSetPlayerActor },
			{ "SetStormActor", &UELSSWidgetHUD_MiniMapZoom::execSetStormActor },
			{ "SetVisibleAnnounceStormAndGuide", &UELSSWidgetHUD_MiniMapZoom::execSetVisibleAnnounceStormAndGuide },
			{ "SetVisibleOperationButton", &UELSSWidgetHUD_MiniMapZoom::execSetVisibleOperationButton },
			{ "ShowOffIcons", &UELSSWidgetHUD_MiniMapZoom::execShowOffIcons },
			{ "Update", &UELSSWidgetHUD_MiniMapZoom::execUpdate },
			{ "UpdateAnnounceGuide", &UELSSWidgetHUD_MiniMapZoom::execUpdateAnnounceGuide },
			{ "UpdateAnnounceStorm", &UELSSWidgetHUD_MiniMapZoom::execUpdateAnnounceStorm },
			{ "UpdateCarrotMedal", &UELSSWidgetHUD_MiniMapZoom::execUpdateCarrotMedal },
			{ "UpdateEnemy", &UELSSWidgetHUD_MiniMapZoom::execUpdateEnemy },
			{ "UpdateHorseSaddle", &UELSSWidgetHUD_MiniMapZoom::execUpdateHorseSaddle },
			{ "UpdateItemBoxAndTreasureBox", &UELSSWidgetHUD_MiniMapZoom::execUpdateItemBoxAndTreasureBox },
			{ "UpdatePlayer", &UELSSWidgetHUD_MiniMapZoom::execUpdatePlayer },
			{ "UpdateStormZone", &UELSSWidgetHUD_MiniMapZoom::execUpdateStormZone },
			{ "WorldPosToCanvasPos", &UELSSWidgetHUD_MiniMapZoom::execWorldPosToCanvasPos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventApplyAliveCount_Parms
		{
			int32 InAliveCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAliveCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::NewProp_InAliveCount = { "InAliveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventApplyAliveCount_Parms, InAliveCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::NewProp_InAliveCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "ApplyAliveCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventApplyAliveCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventApplyAreaShrinkTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventApplyAreaShrinkTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "ApplyAreaShrinkTime", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventApplyAreaShrinkTime_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventApplyKOCount_Parms
		{
			int32 InKOCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InKOCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::NewProp_InKOCount = { "InKOCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventApplyKOCount_Parms, InKOCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::NewProp_InKOCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "ApplyKOCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventApplyKOCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventCanvasPosToMaterialPos_Parms
		{
			FVector2D InCanvasPos;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCanvasPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCanvasPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_InCanvasPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_InCanvasPos = { "InCanvasPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventCanvasPosToMaterialPos_Parms, InCanvasPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_InCanvasPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_InCanvasPos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventCanvasPosToMaterialPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_InCanvasPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "CanvasPosToMaterialPos", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventCanvasPosToMaterialPos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "CreateMarkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventGetCanvasScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventGetCanvasScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "GetCanvasScale", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventGetCanvasScale_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventGetEnemyVisibleDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventGetEnemyVisibleDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "GetEnemyVisibleDistance", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventGetEnemyVisibleDistance_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventGetFloor_Parms
		{
			float InZpos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InZpos;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::NewProp_InZpos = { "InZpos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventGetFloor_Parms, InZpos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventGetFloor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::NewProp_InZpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "GetFloor", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventGetFloor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventGetItemBoxVisibleDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventGetItemBoxVisibleDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "GetItemBoxVisibleDistance", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventGetItemBoxVisibleDistance_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventIsTreasureBox_Parms
		{
			ESSItemBoxType InType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventIsTreasureBox_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MiniMapZoom_eventIsTreasureBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsTreasureBox_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "IsTreasureBox", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsTreasureBox_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventIsUsingEnemySearchAbility_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MiniMapZoom_eventIsUsingEnemySearchAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsUsingEnemySearchAbility_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "IsUsingEnemySearchAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsUsingEnemySearchAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventIsUsingItemBoxSearchAbility_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MiniMapZoom_eventIsUsingItemBoxSearchAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsUsingItemBoxSearchAbility_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "IsUsingItemBoxSearchAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventIsUsingItemBoxSearchAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "PlayIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "PlayOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetAreaShrinkTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventSetAreaShrinkTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetAreaShrinkTime", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetAreaShrinkTime_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetMinimapTexture_Parms
		{
			int32 InMinimapID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinimapID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::NewProp_InMinimapID = { "InMinimapID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventSetMinimapTexture_Parms, InMinimapID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::NewProp_InMinimapID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetMinimapTexture", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetMinimapTexture_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetPlayerActor_Parms
		{
			AActor* inPlayerActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::NewProp_inPlayerActor = { "inPlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventSetPlayerActor_Parms, inPlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::NewProp_inPlayerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetPlayerActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetPlayerActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetStormActor_Parms
		{
			AELSSStorm* InStormActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStormActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::NewProp_InStormActor = { "InStormActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventSetStormActor_Parms, InStormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::NewProp_InStormActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetStormActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetStormActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetVisibleAnnounceStormAndGuide_Parms
		{
			bool InIsShow;
		};
		static void NewProp_InIsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MiniMapZoom_eventSetVisibleAnnounceStormAndGuide_Parms*)Obj)->InIsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow = { "InIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetVisibleAnnounceStormAndGuide_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::NewProp_InIsShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetVisibleAnnounceStormAndGuide", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetVisibleAnnounceStormAndGuide_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventSetVisibleOperationButton_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_MiniMapZoom_eventSetVisibleOperationButton_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetVisibleOperationButton_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "SetVisibleOperationButton", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventSetVisibleOperationButton_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "ShowOffIcons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateAnnounceGuide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateAnnounceStorm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateCarrotMedal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateHorseSaddle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateItemBoxAndTreasureBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdatePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "UpdateStormZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics
	{
		struct ELSSWidgetHUD_MiniMapZoom_eventWorldPosToCanvasPos_Parms
		{
			FVector InWorldPos;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWorldPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWorldPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_InWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_InWorldPos = { "InWorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventWorldPosToCanvasPos_Parms, InWorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_InWorldPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_InWorldPos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapZoom_eventWorldPosToCanvasPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_InWorldPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, nullptr, "WorldPosToCanvasPos", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapZoom_eventWorldPosToCanvasPos_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_NoRegister()
	{
		return UELSSWidgetHUD_MiniMapZoom::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeMinMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeMinMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeMinMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeMinMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeSecMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeSecMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeSecMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeSecMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KO10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KO10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alive10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Alive10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationButtonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationButtonWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormGuide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormGuide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceStorm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnnounceStorm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBox01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBox01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBox02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBox02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBox02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreasureBox01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreasureBox01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreasureBox02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreasureBox02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreasureBox02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle01Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseSaddle01Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HorseSaddle01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle02Widgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseSaddle02Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseSaddle02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HorseSaddle02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrotMedal01Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrotMedal01Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrotMedal02Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrotMedal02Widgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorThreshold_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDoneInit_MetaData[];
#endif
		static void NewProp_IsDoneInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDoneInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowShrinkTime_MetaData[];
#endif
		static void NewProp_IsShowShrinkTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowShrinkTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSearchAbilityUsing_MetaData[];
#endif
		static void NewProp_IsSearchAbilityUsing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSearchAbilityUsing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWatchGameMode_MetaData[];
#endif
		static void NewProp_IsWatchGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWatchGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiniMapTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAliveCount, "ApplyAliveCount" }, // 77247229
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyAreaShrinkTime, "ApplyAreaShrinkTime" }, // 1800876757
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyKOCount, "ApplyKOCount" }, // 2692939387
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 3305274949
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CanvasPosToMaterialPos, "CanvasPosToMaterialPos" }, // 3163031160
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_CreateMarkers, "CreateMarkers" }, // 2703517400
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetCanvasScale, "GetCanvasScale" }, // 3690164515
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetEnemyVisibleDistance, "GetEnemyVisibleDistance" }, // 2085373652
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetFloor, "GetFloor" }, // 2026903761
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_GetItemBoxVisibleDistance, "GetItemBoxVisibleDistance" }, // 2590427619
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Init, "Init" }, // 3966995474
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsTreasureBox, "IsTreasureBox" }, // 2921550164
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingEnemySearchAbility, "IsUsingEnemySearchAbility" }, // 2155402179
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_IsUsingItemBoxSearchAbility, "IsUsingItemBoxSearchAbility" }, // 2703444116
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayIn, "PlayIn" }, // 3228182646
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_PlayOut, "PlayOut" }, // 1493474998
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetAreaShrinkTime, "SetAreaShrinkTime" }, // 1548102219
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetKeyConfig, "SetKeyConfig" }, // 2799327299
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetMinimapTexture, "SetMinimapTexture" }, // 555324662
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetPlayerActor, "SetPlayerActor" }, // 2216350215
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetStormActor, "SetStormActor" }, // 4155105528
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleAnnounceStormAndGuide, "SetVisibleAnnounceStormAndGuide" }, // 1471411736
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_SetVisibleOperationButton, "SetVisibleOperationButton" }, // 2815498276
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_ShowOffIcons, "ShowOffIcons" }, // 756378658
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_Update, "Update" }, // 1182777493
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceGuide, "UpdateAnnounceGuide" }, // 2810732803
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateAnnounceStorm, "UpdateAnnounceStorm" }, // 1479704567
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateCarrotMedal, "UpdateCarrotMedal" }, // 1953738866
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateEnemy, "UpdateEnemy" }, // 3845920066
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateHorseSaddle, "UpdateHorseSaddle" }, // 883732442
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateItemBoxAndTreasureBox, "UpdateItemBoxAndTreasureBox" }, // 1491526185
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdatePlayer, "UpdatePlayer" }, // 4048281148
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_UpdateStormZone, "UpdateStormZone" }, // 2845496949
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapZoom_WorldPosToCanvasPos, "WorldPosToCanvasPos" }, // 77338958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_MiniMapZoom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_10 = { "KOMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KOMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_01 = { "KOMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KOMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_10 = { "AliveMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AliveMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_01 = { "AliveMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AliveMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_10 = { "ShrinkTimeMinMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeMinMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_01 = { "ShrinkTimeMinMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeMinMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_10 = { "ShrinkTimeSecMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeSecMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_01 = { "ShrinkTimeSecMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeSecMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeWidget = { "ShrinkTimeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ShrinkTimeWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KO10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KO10Widget = { "KO10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, KO10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KO10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KO10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Alive10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Alive10Widget = { "Alive10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Alive10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Alive10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Alive10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_OperationButtonWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_OperationButtonWidget = { "OperationButtonWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, OperationButtonWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_OperationButtonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_OperationButtonWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormGuide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormGuide = { "StormGuide", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormGuide), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormGuide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormZone = { "StormZone", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormZone), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AnnounceStorm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AnnounceStorm = { "AnnounceStorm", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, AnnounceStorm), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AnnounceStorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AnnounceStorm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MapCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MapCanvas = { "MapCanvas", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MapCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MapCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapImage = { "MiniMapImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MiniMapImage), Z_Construct_UClass_UELSSWidgetHUD_MiniMapImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_Inner = { "Enemy01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets = { "Enemy01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Enemy01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_Inner = { "Enemy02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets = { "Enemy02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Enemy02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_Inner = { "ItemBox01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets = { "ItemBox01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemBox01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_Inner = { "ItemBox02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets = { "ItemBox02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemBox02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_Inner = { "TreasureBox01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets = { "TreasureBox01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, TreasureBox01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_Inner = { "TreasureBox02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets = { "TreasureBox02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, TreasureBox02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_Inner = { "HorseSaddle01Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets = { "HorseSaddle01Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, HorseSaddle01Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_Inner = { "HorseSaddle02Widgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets = { "HorseSaddle02Widgets", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, HorseSaddle02Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal01Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal01Widgets = { "CarrotMedal01Widgets", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, CarrotMedal01Widgets), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal01Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal01Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal02Widgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal02Widgets = { "CarrotMedal02Widgets", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, CarrotMedal02Widgets), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal02Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal02Widgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemManager = { "ItemManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, ItemManager), Z_Construct_UClass_AELSSItemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormActor = { "StormActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, StormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormActor_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold_Inner = { "FloorThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold = { "FloorThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, FloorThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MiniMapZoom*)Obj)->IsDoneInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit = { "IsDoneInit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MiniMapZoom), &Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MiniMapZoom*)Obj)->IsShowShrinkTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime = { "IsShowShrinkTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MiniMapZoom), &Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MiniMapZoom*)Obj)->IsSearchAbilityUsing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing = { "IsSearchAbilityUsing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MiniMapZoom), &Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MiniMapZoom*)Obj)->IsWatchGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode = { "IsWatchGameMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MiniMapZoom), &Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerPos = { "PlayerPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerFloor = { "PlayerFloor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, PlayerFloor), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapTypeIndex = { "MiniMapTypeIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, MiniMapTypeIndex), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Minutes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Minutes), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Seconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapZoom" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapZoom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapZoom, Seconds), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Seconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KOMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AliveMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeMinMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeSecMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ShrinkTimeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_KO10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Alive10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_OperationButtonWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormGuide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_AnnounceStorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MapCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Enemy02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemBox02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_TreasureBox02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_HorseSaddle02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal01Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_CarrotMedal02Widgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_ItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_StormActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_FloorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsDoneInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsShowShrinkTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsSearchAbilityUsing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_IsWatchGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_PlayerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_MiniMapTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::NewProp_Seconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_MiniMapZoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::ClassParams = {
		&UELSSWidgetHUD_MiniMapZoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_MiniMapZoom, 3921914667);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_MiniMapZoom>()
	{
		return UELSSWidgetHUD_MiniMapZoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_MiniMapZoom(Z_Construct_UClass_UELSSWidgetHUD_MiniMapZoom, &UELSSWidgetHUD_MiniMapZoom::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_MiniMapZoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_MiniMapZoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
